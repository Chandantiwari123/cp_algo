#include <bits/stdc++.h>
#define ll long long int
#define dd double
using namespace std;

int main()
{
    ll n,k,element;
    cin>>n>>k>>element;
    priority_queue<pair<ll,ll>>Q;
    for(ll i=0;i<n;i++)
    {
        ll e;cin>>e;
        ll freq = abs(element-e);
        Q.push({freq,e});
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
Input : no. of element in array, no. of element which needs to closer, element
10 3 7
1 2 3 4 5 6 7 8 9 10
Output :
8 6 7
*/
