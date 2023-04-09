#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void left(vector<ll> &,ll,ll);
void right(vector<ll> & V,ll l,ll r)
{
    if(l>r)
    {
        return;
    }
    else
    {
        ll mid = (l+r)/2;
        cout<<V[mid]<<" ";
        right(V,l,mid-1);
        left(V,mid+1,r);
    }
}
void left(vector<ll> & V,ll l,ll r)
{
    if(l>r)
    {
        return;
    }
    else
    {
        ll mid = (l+r)/2;
        cout<<V[mid]<<" ";
        left(V,mid+1,r);
        right(V,l,mid-1);
    }
}
int main()
{
    ll n;
    vector<ll>V;
    cin>>n;
    while(n--)
    {
        ll k;
        cin>>k;
        V.push_back(k);
    }
    ll l =0;
    ll r = V.size()-1;
    left(V,l,r);
}
