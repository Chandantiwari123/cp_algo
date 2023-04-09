#include <iostream>
#define ll long long int
using namespace std;
void solve(ll s,ll d,ll h,ll n)
{
    if(n==1)
    {
        cout<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    solve(s,h,d,n-1);
    cout<<n<<" from "<<s<<" to "<<d<<endl;
    solve(h,d,s,n-1);
    return;
}
int main()
{
    ll n,s,h,d;
    cin>>n;
    s = 1;
    h = 2;
    d = 3;
    solve(s,d,h,n);
}

