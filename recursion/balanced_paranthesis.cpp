#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void balanced_paranthesis(ll open,ll close,string op)
{
    if(open==0&&close==0)
    {
        cout<<op<<" ";
        return;
    }
    if(open!=0)
    {
        string op1 = op;
        op1.push_back('(');
        ll open1 = open-1;
        balanced_paranthesis(open1,close,op1);
    }
    if(open<close)
    {
        string op2 = op;
        op2.push_back(')');
        ll close1 = close-1;
        balanced_paranthesis(open,close1,op2);
        
    }
}
int main()
{
   ll n;
   cin>>n;
   ll open = n;
   ll close = n;
   string op = "";
   balanced_paranthesis(open,close,op);
}

/*


Input :
3
Output :
((())) (()()) (())() ()(()) ()()()


*/
