#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll un_knapsack(vector<ll>v,vector<ll>w,ll n,ll W)
{
    ll dp[W+1];
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<=W;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(w[j]<=i)
            dp[i] = max(dp[i],dp[i-w[j]]+v[j]);
        }
    }
    return dp[W];
}
int main()
{
    ll n,W;
    vector<ll>v,w;
    cout<<"Enter the no. of item and total weight :";
    cin>>n>>W;
    cout<<"Enter the values of item : ";
    for(ll i=0;i<n;i++)
    {
        ll k;cin>>k;
        v.push_back(k);
    }
    cout<<"Enter the weights of item : ";
    for(ll i=0;i<n;i++)
    {
        ll k;cin>>k;
        w.push_back(k);
    }
    cout<<"Max value : "<<un_knapsack(v,w,n,W);
}