#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll dp[100][100];
ll Knapsack(vector<ll>V,ll n,ll sum)
{
    if(sum == 0)
    return 1;
    if(n == 0)
    return 0;
    if(dp[n][sum]!=-1)
    return dp[n][sum];
    if(V[n-1]<=sum)
    {
        return dp[n][sum] = Knapsack(V,n-1,sum-V[n-1]) + Knapsack(V,n-1,sum);
    }
    else
    {
        return dp[n][sum] = Knapsack(V,n-1,sum);
    }
}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll n,Sum;
    vector<ll>V;
    cout<<"Enter the number of elements and sum =";
    cin>>n>>Sum;
    cout<<"Enter the elements :";
    for(ll i=0;i<n;i++)
    {
        ll k;cin>>k;
        V.push_back(k);
    }
    cout<<"Number of subset with given Sum = "<<Knapsack(V,n,Sum);
}
