#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void subset(string op,string inp)
{
    if(inp.length()==0)
    {
        cout<<op<<" ";
        return;
    }
    else
    {
    string op1 = op;
    string op2 = op;
    op2.push_back(inp[0]);
    inp.erase(inp.begin()+0);
    subset(op1,inp);
    subset(op2,inp);
    }
}
int main()
{
    string S;
    cin>>S;
    string op = "";
    string inp = S;
    subset(op,inp);
}
