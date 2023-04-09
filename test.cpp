#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll dp[51][6];
ll vowel(ll c, ll n)
{
    if(n==0)
    return 1;
    if(dp[n][c] != -1)
    {
        cout<<"I am usefull"<<n<<" "<<c<<endl;
        return dp[n][c];
    }
    ll sum = 0;
    for(ll i=0;i<=c;i++)
    {
        sum += vowel(i,n-1); 
    }
    return dp[n][c] = sum;
}

ll count_v(ll n)
{
    memset(dp,-1,sizeof(dp));
    ll sum=0;
    for(ll i=0;i<5;i++)
    {
        sum += vowel(i,n-1);
    }
    return sum;
}

int main()
{
    ll n;
    cin>>n;
    cout<<count_v(n);
}

