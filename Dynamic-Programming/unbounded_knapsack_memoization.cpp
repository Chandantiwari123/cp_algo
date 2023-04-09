#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll dp[100][100];
ll unbounded_knapsack(vector<ll> v, vector<ll> w, ll n,ll W)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    if(dp[n][W]!=-1)
    {
        return dp[n][W];
    }
    if(w[n-1]<=W)
    {
        return dp[n][W] = max(v[n-1] + unbounded_knapsack(v,w,n,W-w[n-1]) , unbounded_knapsack(v,w,n-1,W));
    }
    else
    {
        return dp[n][W] = unbounded_knapsack(v,w,n-1,W);
    }
}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll n,W;
    vector<ll> v,w;
    cin>>n>>W;
    cout<<"Enter the value array : ";
    for(ll i=0;i<n;i++)
    {
        ll k;cin>>k;
        v.push_back(k);
    }
    cout<<"\nEnter the weight array :";
    for(ll i=0;i<n;i++)
    {
        ll k;cin>>k;
        w.push_back(k);
    }
    cout<<"Max value of bag :"<<unbounded_knapsack(v,w,n,W);
}