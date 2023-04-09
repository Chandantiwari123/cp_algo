#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>parent,low,disc;
vector<ll>vis;
ll dis_time;
void bridges(vector<ll> V[],ll u)
{
    vis[u] = true;
    disc[u] = low[u] = ++dis_time;
    for(ll v : V[u])
    {
        if(!vis[v])
        {
            parent[v] = u;
            bridges(V,v);
            
            low[u] = min(low[u],low[v]);
            
            if(low[v] > disc[u])
            {
                cout<<u<<" "<<v<<endl;
            }
        }
        else if(v != parent[u])
        {
            low[u] = min(disc[v],low[u]);
        }
    }
}
int main()
{
    ll n,e;
    cin>>n>>e; // Number of vertices and edges
    vector<ll>V[n];
    dis_time = 0;
    parent.resize(n);
    low.resize(n);
    disc.resize(n);
    vis.resize(n); fill(vis.begin(),vis.end(),false);
    for(ll i=0;i<e;i++)
    {
        ll a,b;
        cin>>a>>b;
        V[a].push_back(b);
        V[b].push_back(a);
    }
    parent[0] = -1;
    bridges(V,0);
}

