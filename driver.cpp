#include <bits/stdc++.h>
#define ll long long int
using namespace std;
unordered_map<ll,bool>M;
bool good(ll b)
{
    if(M.find(b)!=M.end())
    {
        return true;
    }
    else
    {
        for(ll i=2;i<=b;i=i*2)
        {
            M[i] = true;
        }
    }
    return M[b] == true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        while(a%2==0 and b%2==0)
        {
            a = a/2;
            b = b/2;
        }
       good(b) ? cout<<"Yes\n" : cout<<"No\n";
    }
}

