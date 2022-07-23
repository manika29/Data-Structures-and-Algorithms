//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int f(int row,int col,int n, vector<vector<int>> &arr, vector<vector<int>> &dp){
        if(row>=n || col>=n)
        return 0;
        
        if(dp[row][col]!=-1)
        return dp[row][col];
        
        int first=f(row+1,col,n,arr,dp);
        int second=f(row+1,col-1,n,arr,dp);
        int third=f(row+1,col+1,n,arr,dp);
        
        int maxSum=arr[row][col]+max(first,max(second,third));
        return dp[row][col]=maxSum;
    }

    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int mx=0;
        vector<vector<int>>dp(N+1,vector<int>(N+1,-1));
        for(int col=0; col<N; col++){
            int ans=f(0,col,N,Matrix,dp);
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
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends