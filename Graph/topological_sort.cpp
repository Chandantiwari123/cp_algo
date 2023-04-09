#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll> topological_sort(vector<ll>V[],vector<ll>indegree,ll n)
{
    queue<ll>Q;
    for(ll i=0;i<n;i++)
    {
        if(indegree[i] == 0)
        {
            Q.push(i);
        }
    }
    vector<ll>ans;
    while(!Q.empty())
    {
        ll vert = Q.front();
        ans.push_back(vert);
        Q.pop();
        for(ll i : V[vert])
        {
            indegree[i]--;
            if(indegree[i] == 0)
            {
                Q.push(i);
            }
        }
    }
    return ans;
}
int main()
{
    ll n,e;
    cin>>n>>e;
    vector<ll>V[n];
    vector<ll>indegree(n,0);
    for(ll i=0;i<e;i++)
    {
        ll a,b;
        cin>>a>>b;
        V[a].push_back(b);
        indegree[b]++;
    }
    vector<ll> ans = topological_sort(V,indegree,n);
    for(ll i : ans)
    {
        cout<<i<<" ";
    }
    return 0;
}

// In topological sort graph should be directed and acyclic.
