#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"Before Swapping : \n";
    cout<<"a b = ";
    cin>>a>>b;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"a b = "<<a<<" "<<b<<endl;
    int t = 3;
    int l;
    cout<<"\n\nl = a^b\n";
    cout<<"a = l^b\n";
    cout<<"b = l^a\n";
    while(t--)
    {
        cout<<"a b = ";
        cin>>a>>b;
        l = a^b;
        a = l^b;
        b = l^a;
        cout<<"l a b: "<<l<<" "<<a<<" "<<b<<endl;
    }
    
}

