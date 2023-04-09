#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll Knapsack(ll W,ll n,vector<ll>v,vector<ll>w)
{
    if(n==0||W==0)
    {
        return 0;
    }
    if(w[n-1]<=W)
    {
        return max(v[n-1]+Knapsack(W-w[n-1],n-1,v,w),Knapsack(W,n-1,v,w));
    }
    else
    {
        return Knapsack(W,n-1,v,w);
    }
}
int main()
{
    ll n,W;
    vector<ll>v,w;
    cout<<"enter the no of item and max weight : ";
    cin>>n>>W;
    cout<<"\nEnter the item weight and their values :\n";
    for(ll i=0;i<n;i++)
    {
        ll k;
        cin>>k;
        w.push_back(k);
    }
    for(ll i=0;i<n;i++)
    {
        ll k;
        cin>>k;
        v.push_back(k);
    }
    cout<<"Max value of items :"<<Knapsack(W,n,v,w);
    return 0;
}
