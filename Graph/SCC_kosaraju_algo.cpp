#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>scc;
void dfs1(ll root, vector<bool> &vis, stack<ll> &order, vector<ll>V[]){
    vis[root] = true;
    for(ll i : V[root]){
        if(!vis[i]){
            dfs1(i,vis,order,V);
        }
    }
    order.push(root);
}
void dfs2(ll root, vector<bool> &vis,vector<ll>V[]){
    vis[root] = true;
    for(ll i : V[root]){
        if(!vis[i]){
            dfs2(i,vis,V);
        }
    }
    scc.push_back(root);
}
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>adj[n+1],rev[n+1];
    vector<bool>vis(n+1,false);
    stack<ll>order;
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        rev[b].push_back(a);
    }
    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            dfs1(i,vis,order,adj);
        }
    }
    fill(vis.begin(),vis.end(),false);
    vector<vector<ll>>total_scc;
    while(!order.empty()){
        ll node = order.top();
        order.pop();
        if(!vis[node]){
            dfs2(node,vis,rev);
            total_scc.push_back(scc);
            scc.clear();
        }
    }
    cout<<"Total number of strongly connected component: "total_scc.size()<<endl;
    for(ll i=0;i<total_scc.size();i++){
        for(ll j : total_scc[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

