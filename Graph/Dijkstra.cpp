#include <bits/stdc++.h>
#define ll long long int
#define phbk push_back
#define pii pair<long long int,long long int>
using namespace std;
void Dijkstra(vector<pii> V[] , ll n)
{
    vector<ll>dist(n,INT_MAX);
    dist[0] = 0;
    priority_queue<pii,vector<pii>,greater<pii>>Q;
    Q.push({dist[0] , 0});
    while(!Q.empty())
    {
        ll Dist = Q.top().first;
        ll Vert = Q.top().second;
        Q.pop();
        for(auto i : V[Vert])
        {
            if(Dist + i.second < dist[i.first])
            {
                dist[i.first] = dist[Vert] + i.second;
                Q.push({dist[i.first] , i.first});
            }
        }
    }
    cout<<"vertex  distance\n";
    for(ll i=0;i<n;i++)
    {
    cout<<"  "<<i<<"        "<<dist[i]<<endl;
    }
}
int main()
{
   ll n,e;
   cin>>n>>e;
   vector<pii>V[n];
   for(ll i=0;i<e;i++)
   {
       ll s,t,w;
       cin>>s>>t>>w;
       V[s].phbk({t,w});
       V[t].phbk({s,w}); // If your graph is directed then you should remove it.
   }
   Dijkstra(V,n);
}

