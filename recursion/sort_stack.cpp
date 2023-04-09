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
void insert_at_right_position(stack<ll> & S,ll temp)
{
    if(S.size()==0|| S.top()<=temp)
    {
        S.push(temp);
        return;
    }
    else
    {
        ll tmp = S.top();
        S.pop();
        insert_at_right_position(S,temp);
        S.push(tmp);
    }
}
void sort_stack(stack<ll> & S)
{
    if(S.size()==0)
    {
        return;
    }
    else
    {
        ll temp = S.top();
        S.pop();
        sort_stack(S);
        insert_at_right_position(S,temp);
    }
}
int main()
{
    ll n;
    stack<ll>S;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll el;
        cin>>el;
        S.push(el);
    }
    sort_stack(S);
    print(S);
}
