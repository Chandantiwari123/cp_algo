#include <bits/stdc++.h>
#define ll long long int
#define pii pair<ll,ll>
#define pci pair<char,ll>
#define in_r(a,b,c,d) (a>=0 && a<c && b>=0 && b<d)
using namespace std;
bool vis[200][200];
ll dist[200][200];
void bfs(ll n,ll m,queue<pii>Q)
{
    while(!Q.empty())
    {
        ll row=Q.front().first;
        ll col=Q.front().second;
        Q.pop();
        if(!vis[row-1][col]&&in_r(row-1,col,n,m))
        {
            dist[row-1][col] = dist[row][col]+1;
            vis[row-1][col]=true;
            Q.push({row-1,col});
        }
        if(!vis[row+1][col]&&in_r(row+1,col,n,m))
        {
            dist[row+1][col] = dist[row][col]+1;
            vis[row+1][col]=true;
            Q.push({row+1,col});
        }
        if(!vis[row][col-1]&&in_r(row,col-1,n,m))
        {
            dist[row][col-1]=dist[row][col]+1;
            vis[row][col-1]=true;
            Q.push({row,col-1});
        }
        if(!vis[row][col+1]&&in_r(row,col+1,n,m))
        {
            dist[row][col+1]=dist[row][col]+1;
            vis[row][col+1]=true;
            Q.push({row,col+1});
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    vector<char>V[200];
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        queue<pii>Q;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                char k;
                cin>>k;
                V[i].push_back(k);
                if(k=='1')
                {
                    dist[i][j]=0;
                    vis[i][j]=true;
                    Q.push({i,j});
                }
                else
                {
                    vis[i][j]=false;
                }
            }
        }
        bfs(n,m,Q);
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cout<<dist[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
