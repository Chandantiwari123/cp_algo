#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"multiply by 5 : \n";
    int a = 3;
    int b = 3;
    int t=5;
    while(t--)
    {
        a = a<<5;           // If you are shifting digit left side by a number n then it's mean you are multiplying that number by pow(2,n);
        b = b*pow(2,5);
        cout<<a<<" "<<b<<endl;
    }
    cout<<"Devide by 5 : \n";
    t=7;
    while(t--)
    {
        a = a>>5;           // If you are shifting digit right side by a number n then it's mean you are deviding that number by pow(2,n);
        b = b/pow(2,5);
        cout<<a<<" "<<b<<endl;
    }
    cout<<"\n\nEven or Odd:\n\n";
    t = 7;
    while(t--)
    {
        int number;
        cin>>number;
        // number will be end with 0(even) or 1(odd)  and if we will take & with 1 then it will be one or zero.
        int l = 1;
        int Val = l&number;         // It's called bit masking.
        //cout<<"Val: "<<Val<<endl;
        if(Val==0)
        {
            cout<<"EVEN\n";
        }
        else
        {
            cout<<"ODD\n";
        }
    }
}

