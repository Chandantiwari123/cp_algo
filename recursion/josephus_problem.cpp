#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int Josephs_problem(ll index,vector<ll> & V,ll k)
{
    if(V.size()==1)
    {
        return V[0];
    }
    index = (index+k)%(V.size());
    V.erase(V.begin()+index);
    Josephs_problem(index,V,k);
}
int main()
{
   ll n,k;
   cin>>n>>k;
   vector<ll>V;
   for(ll i=1;i<=n;i++)
   {
       V.push_back(i);
   }
   ll index = 0;
   cout<<Josephs_problem(index,V,k-1);
}

