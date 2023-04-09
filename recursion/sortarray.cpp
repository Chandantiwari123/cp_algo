#include <bits/stdc++.h>

using namespace std;
void funinsert(vector<int> & V,int temp)  // this function will insert your temp in correct position.
{
    if(V.size()==0 || temp>=V[V.size()-1])   // It will check the position is correct or not.If the position is correct the it will insert the value.
    {
        V.push_back(temp);
        return ;
    }
    else                                        // If the position is not correct.
    {
        int tmp = V[V.size()-1];                // store the last element in tmp.
        V.pop_back();                           // remove the last element.
        funinsert(V,temp);                     // now it will insert your temp in correct position.
        V.push_back(tmp);                    // Now insert the last element you have pop out in last position.
    }
}
void funsort(vector<int> & V)  // this function will sort your elements.
{
    if(V.size()==0)
    {
        return ;
    }
    int temp = V[V.size()-1]; // store the last element in temp.
    V.pop_back();             // and remove the last element.
    funsort(V);               // As you know this function will sort your rest array.
    funinsert(V,temp);        // Now insert the last element which you have pop out in correct position.
}
int main()
{
    vector<int>V;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        V.push_back(k);
    }
    funsort(V);
    for(int i=0;i<n;i++)
    {
        cout<<V[i]<<" ";
    }
}
