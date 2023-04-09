#include <bits/stdc++.h>
#define ll long long int
#define pll pair<ll,ll>
using namespace std;
ll prims(vector<pair<ll,ll>> V[],ll n){
    vector<bool>vis(n,false);
    vector<ll>dist(n,LONG_MAX);
    priority_queue<pll,vector<pll>,greater<pll>>Q;
    Q.push({0,0});
    ll sum = 0;
    dist[0] = 0;
    while(!Q.empty()){
        ll val = Q.top().second;
        ll dis = Q.top().first;
        if(!vis[val]){
            sum += dis;
            vis[val] = true;
        }
        Q.pop();
        for(auto i : V[val]){
            if(!vis[i.first] and dist[i.first] > i.second){
                dist[i.first] = i.second;
                Q.push({i.second,i.first});
            }
        }
    }
    return sum;
}
int main()
{
    ll n,e;
    cin>>n>>e;
    vector<pair<ll,ll>>V[n];
    for(ll i=0;i<e;i++){
        ll a,b,w;
        cin>>a>>b>>w;
        V[a].push_back({b,w});
        V[b].push_back({a,w});
    }
    cout<<prims(V,n);
    
}

