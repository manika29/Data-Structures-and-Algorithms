//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
   int f(int i,int j,int m,int n,vector<vector<int>> &arr,vector<vector<int>> &dp){
        if(i<0 || i>=n  || j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int updia=f(i-1,j+1,m,n,arr,dp);
        int lowdia=f(i+1,j+1,m,n,arr,dp);
        int right=f(i,j+1,m,n,arr,dp);
        int maxgold=arr[i][j]+max(right,max(lowdia,updia));
        return dp[i][j]=maxgold;
    }

    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
       int mx=0;
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<n;i++){
            int ans=f(i,0,m,n,M,dp);
            mx=max(mx,ans);
        }
        return mx;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends