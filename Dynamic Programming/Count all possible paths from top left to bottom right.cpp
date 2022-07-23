//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  long long int dp[100][100];
 long long  int solve( int x, int y,int m,int n){
        
   if(x==(m-1) && y==(n-1)){
  
       return 1; 
   }

    if(x>=m || y>=n)
    return 0; 
    
   if(dp[x][y]!=-1){
       return dp[x][y]%1000000007;
   }
  
       int A=solve(x,y+1,m,n);
       int B=solve(x+1,y,m,n);
       dp[x][y]=(A+B)%1000000007;

       return dp[x][y]%1000000007;
  
}
    long long int numberOfPaths(int m, int n){
        // code here
        for(int i=0;i<m+1;i++){
           for(int j=0;j<n+1;j++){
               dp[i][j]=-1;
           }
       }
       
       
     return solve(0,0,m,n)%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends