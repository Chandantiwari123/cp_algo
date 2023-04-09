#include <bits/stdc++.h>
#define ll long long int
#define dd double

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>Q; // Min heap which will store pair
    unordered_map<ll,ll>M;
    for(ll i=0;i<n;i++)
    {
        ll e;cin>>e;
        M[e]++;
    }
    for(auto &i:M){
        Q.push({i.second,i.first});
        if(Q.size()>k)
        Q.pop();
    }
    while(!Q.empty())
    {
        cout<<Q.top().second<<" ";
        Q.pop();
    }
}
/*
Input :
10 3
1 2 3 4 3 5 5 5 6 2

Output:
2 3 5
*/
