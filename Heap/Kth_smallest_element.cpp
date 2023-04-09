#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<ll>Q; // max heap
    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        ll e;
        cin>>e;
        Q.push(e);
        if(Q.size()>k)
        Q.pop();
    }
    cout<<Q.top();
}

/*
Input :
6 3
5 1 4 2 3 6

Output :
3
*/
