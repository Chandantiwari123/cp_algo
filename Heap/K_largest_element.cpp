#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<ll,vector<ll>,greater<ll>>Q; // min heap
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
    while(!Q.empty())
    {
    cout<<Q.top()<<" ";
    Q.pop();
    }
}

/*
Input :
6 2
6 1 5 2 4 3

Output :
5 6

*/
