#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll min(ll a,ll b){return a<b ? a : b;}
vector<ll>disc,low,parent;  // discovery time, lowest time to reach an ansestor , parent node
vector<bool>ap,vis;         // if it's articulation point, if it's visited
ll disc_time;
void articulation_point(vector<ll>V[],ll vert)
{
    disc[vert] = low[vert] = ++disc_time;
    vis[vert] = true;
    ll children = 0;
    for(ll i : V[vert])
    {
        if(!vis[i])
        {
            children++;
            parent[i] = vert;
            articulation_point(V,i);
            
            low[vert] = min(low[vert],low[i]);  // here we will check if child of vert is already connected with ansestor
            
            if(parent[vert] == -1 and children > 1) // if it's root node and has more than one child sub-graph then it will be an ap point.
            {
                ap[vert] = true;
            }
            
            if(parent[vert] != -1 and low[i] >= disc[vert]) // if it's not root node but it's child node is not connected with an ansestor then it will be an ap point
            {
                ap[vert] = true;
            }
        }
        else if(i != parent[vert])      // if i does not parent of vert then it's mean it can be an ansestor
        {
            low[vert] = min(disc[i],low[vert]);
        }
    }
}
int main()
{
    cout<<"Enter the number of vertex and edges: ";
    ll n,e;
    cin>>n>>e;          // Number of vertex and edges
    disc_time=0;
    disc.resize(n);     // discovery time of node
    low.resize(n);      // lowest time to reach to ansestor node;
    ap.resize(n);       // If it is articulation point
    vis.resize(n); fill(vis.begin(),vis.end(),false);
    parent.resize(n); parent[0] = -1;    // If you are taking 'a' as root node then parent[a] = -1;
    vector<ll>V[n];  // adjancency list
    
    for(ll i=0;i<e;i++)
    {
        ll a,b;
        cin>>a>>b;
        V[a].push_back(b);
        V[b].push_back(a);
    }
    articulation_point(V,0);  // adjancency list and root node.
    cout<<"Articulation point : ";
    for(ll i=0;i<n;i++)
    {
        if(ap[i] == true)
        {
            cout<<i<<" ";
        }
    }
}


// It is known as Tarzon's algorithm
