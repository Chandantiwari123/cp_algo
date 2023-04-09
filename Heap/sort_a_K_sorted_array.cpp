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
        {
            cout<<Q.top()<<" ";
            Q.pop();
        }
        
    }
    while(!Q.empty())
    {
    cout<<Q.top()<<" ";
    Q.pop();
    }
}
/*
Input :
7 3
6 5 3 2 8 10 9

Output :
2 3 5 6 8 9 10
*/
