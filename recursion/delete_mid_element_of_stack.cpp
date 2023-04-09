#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void print(stack<ll> & S)
{
    if(S.size()==1)
    {
        cout<<S.top()<<" ";
        return;
    }
    ll tmp = S.top();
    S.pop();
    print(S);
    cout<<tmp<<" ";
}
void delete_middle_element(stack<ll> & S,ll mid)
{
    if(S.size()==mid)
    {
        S.pop();
        return;
    }
    else
    {
        ll temp = S.top();
        S.pop();
        delete_middle_element(S,mid);
        S.push(temp);
    }
}
int main()
{
    ll n;
    stack<ll>S;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll k;cin>>k;
        S.push(k);
    }
    ll mid = (1 + S.size())/2;
    delete_middle_element(S,mid);
    print(S);
}
