#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll Kth_symbol_of_grammer(ll n,ll k)
{
    if(n==1&&k==1)
    {
        return 0;
    }
    ll mid = pow(2,n-1)/2;
    if(k<=mid)
    {
        return Kth_symbol_of_grammer(n-1,k);
    }
    else
    {
        return !Kth_symbol_of_grammer(n-1,k-mid);
    }
    
}
int main()
{
    ll n,k;
    cin>>n>>k;
    cout<<Kth_symbol_of_grammer(n,k)<<endl;
    return 0;
}
