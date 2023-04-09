// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    
	string isNegativeWeightCycle(int n, vector<vector<int>>edges){
	   vector<int>dist(n,INT_MAX);
	   dist[0] = 0;
	   for(int i=0;i<n;i++){
	       for(auto a : edges){
	           if(dist[a[0]]!=INT_MAX and dist[a[0]] + a[2]< dist[a[1]]){
	               dist[a[1]] = dist[a[0]] + a[2];
	           }
	       }
	   }
	   for(auto a : edges){
           if(a[0]!=INT_MAX and dist[a[0]] + a[2]< dist[a[1]]){
               return "Cycle exist";
           }
       }
       return "Cycle doesn't exist";
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		string ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
