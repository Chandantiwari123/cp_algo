#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll Knapsack(ll W,ll n,vector<ll>v,vector<ll>w)
{
    ll K[n+1][W+1];
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=W;j++)
        {
            if(i==0||j==0)
            {
                K[i][j]=0;
            }
            else
            if(w[i-1]<=j)
            {
                K[i][j] = max(v[i-1]+K[i-1][j-w[i-1]],K[i-1][j]);
            }
            else
            {
                K[i][j] = K[i-1][j];
            }
        }
    }
    return K[n][W];
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
