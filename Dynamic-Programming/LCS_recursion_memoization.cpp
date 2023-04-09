#include <bits/stdc++.h>

using namespace std;
int dp[100][100];// we are asuming that the size of string will be less than 100.
int LCS(string x,string y,int m,int n)
{
    if(m==0 || n==0)
    return 0;
    if(dp[m][n]!=-1)
    return dp[m][n];
    if(x[m-1] == y[n-1])
    {
        return dp[m][n] = 1 + LCS(x,y,m-1,n-1);
    }
    else
    {
        return dp[m][n] = max(LCS(x,y,m,n-1),LCS(x,y,m-1,n));
    }
}
int main()
{
    memset(dp,-1,sizeof(dp));
    string x,y;
    cin>>x;
    cin>>y;
    cout<<LCS(x,y,x.size(),y.size());

    return 0;
}
