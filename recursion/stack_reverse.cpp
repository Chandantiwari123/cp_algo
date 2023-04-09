#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void print(stack<ll> S)
{
    if(S.size()==1)
    {
        cout<<S.top()<<" ";
        return;
    }
    ll k = S.top();
    S.pop();
    print(S);
    cout<<k<<" ";
}
void insert_at_first(stack<ll> & S,ll temp)
{
    if(S.size()==0)
    {
        S.push(temp);
        return;
    }
    else
    {
        ll tmp = S.top();
        S.pop();
        insert_at_first(S,temp);
        S.push(tmp);
    }
}
void reverese_stack(stack<ll> & S)
{
    if(S.size()==0)
    {
        return;
    }
    else
    {
        ll temp = S.top();
        S.pop();
        reverese_stack(S);
        insert_at_first(S,temp);
    }
}
int main()
{
    ll n;
    stack<ll>S;
    cin>>n;
    while(n--)
    {
        ll k;cin>>k;
        S.push(k);
    }
    reverese_stack(S);
    print(S);
}
