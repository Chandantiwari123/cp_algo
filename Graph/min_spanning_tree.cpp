#include <bits/stdc++.h>
#define ll long long int
#define f first
#define s second
using namespace std;
ll parent[10000];
ll get(ll a)
{
    return parent[a] = (parent[a]==a?a :get(parent[a]));
}
ll minspanning(ll m, pair<ll,pair<ll,ll>> V[])
{
    
    ll sum=0;
    for(ll i=0;i<m;i++)
    {
        ll a = V[i].s.f;
        ll b = V[i].s.s;
        ll w = V[i].f;
        a = get(a);
        b = get(b);
        if(a!=b)
        {
            cout<<"Weight: "<<w<<endl;
            sum+=w;
            parent[a] = b;
        }
    }
    return sum;
}
int main()
{
    ll n,m;
    cin>>n>>m;		// no_of_nodes, no_of_edges
    for(ll i=0;i<n;i++)
    parent[i]=i;
    pair<ll,pair<ll,ll>>V[100000];
    for(ll i=0;i<m;i++)
    {
        ll w,a,b;
        cin>>w>>a>>b;       // Weight, one_end, another_end
        V[i] = {w,{a,b}};
    }
    sort(V,V+m);
    
    cout<<minspanning(m,V);
}

