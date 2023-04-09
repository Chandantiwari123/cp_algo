#include <bits/stdc++.h>
#define ll long long int
#define dd double
using namespace std;
void permutation_with_case_change(string inp,string op)
{
    if(inp.length()==0)
    {
        cout<<op<<endl;
        return;
    }
    if(isalpha(inp[0])) // isalpha() will check character is alphabate or not.
    {
        string op1 = op;
        string op2 = op;
        op1.push_back(tolower(inp[0]));
        op2.push_back(toupper(inp[0]));
        inp.erase(inp.begin()+0);
        permutation_with_case_change(inp,op1);
        permutation_with_case_change(inp,op2);
    }
    else
    {
        string op1 = op;
        op1.push_back(inp[0]);
        inp.erase(inp.begin()+0);
        permutation_with_case_change(inp,op1);
    }
}
int main()
{
    string s;
    cin>>s;
    string inp = s;
    string op = "";
    permutation_with_case_change(inp,op);
}

/*
Input :
A1b2
Output :
a1b2
a1B2
A1b2
A1B2
*/
