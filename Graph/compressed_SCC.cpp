// compress all the SCC into one node 

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>scc;
void dfs1(ll node, vector<bool> &vis, stack<ll> &order, vector<ll> adj[]){
    vis[node] = true;
    for(ll i : adj[node]){
        if(!vis[i]){
            dfs1(i,vis,order,adj);
        }
    }
    order.push(node);
}
void dfs2(ll node, vector<bool> &vis, vector<ll> rev[]){
    vis[node] = true;
    for(ll i: rev[node]){
        if(!vis[i]){
            dfs2(i,vis,rev);
        }
    }
    scc.push_back(node);
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll>adj[n],rev[n],scc_adj[n];
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
         a--;b--;
        adj[a].push_back(b);
        rev[b].push_back(a);
    }
    vector<bool>vis(n,false);
    stack<ll>order;
    for(ll i=0;i<n;i++){
        if(!vis[i]){
            dfs1(i,vis,order,adj);
        }
    }
    fill(vis.begin(),vis.end(),false);
    vector<ll>root(n);
    while(!order.empty()){
        ll node = order.top();
        order.pop();
        if(!vis[node]){
            dfs2(node,vis,rev);
            for(ll i: scc){ 
               root[i] = node;      // make the same root of all node of a SCC of graph so we can show a SCC through that root node.
            }
            scc.clear();
        }
    }
    // Create adjancecy list for compressed SCC.
    for(ll i=0;i<n;i++){
        for(ll j : adj[i]){
            ll root_i = root[i];
            ll root_j = root[j];
            if(root_i != root_j){
                scc_adj[root_i].push_back(root_j);
            }
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j : scc_adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
