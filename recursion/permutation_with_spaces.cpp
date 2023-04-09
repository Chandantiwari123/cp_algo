#include <bits/stdc++.h>
#define ll long long int
#define dd double

using namespace std;
void permutation_with_spaces(string inp,string op)
{
    if(inp.length()==1)
    {
        cout<<op+inp<<endl;
        return;
    }
    string op1 = op+inp[0]+"-";
    string op2 = op+inp[0];
    inp.erase(inp.begin()+0);
    permutation_with_spaces(inp,op1);
    permutation_with_spaces(inp,op2);
}
int main()
{
    string s;
    cin>>s;
    string inp = s;
    string op = "";
    permutation_with_spaces(inp,op);
}
/*
Input : ABCD
Output :
A-B-C-D
A-B-CD
A-BC-D
A-BCD
AB-C-D
AB-CD
ABC-D
ABCD
*/
