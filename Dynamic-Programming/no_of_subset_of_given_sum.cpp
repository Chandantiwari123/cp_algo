#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll DP[100][100];
ll Knapsack(vector<ll>V,ll n,ll W)
{
    if(W==0)
    return 1;
    if(n==0)
    return 0;
    if(DP[n][W]!=-1)
    return DP[n][W];
    if(V[n-1]<=W)
    {
        return DP[n][W] = Knapsack(V,n-1,W-V[n-1]) + Knapsack(V,n-1,W);
    }
    else
    return DP[n][W] = Knapsack(V,n-1,W);
}
int main()
{
    memset(DP,-1,sizeof(DP));
    ll n,sum;
    cin>>n>>sum;
    vector<ll>V;
    for(ll i=0;i<n;i++)
    {
        ll k;
        cin>>k;
        V.push_back(k);
    }
    cout<<Knapsack(V,n,sum);
}

