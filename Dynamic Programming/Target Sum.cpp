// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    
    int findTargetSumWays(vector<int>&A ,int target) {
        //Your code here
        int sum = 0;
        int n = A.size();
        for(int i = 0; i < n; i++)
            sum += A[i];
        if((sum + target) % 2 != 0)
            return 0;
        int aim = (target + sum) / 2;
        int dp[n + 1][aim + 1];
        
        for(int i = 0; i <= n; i++){
            for(int  j = 0; j <= aim; j++){
                if(i == 0 && j > 0)
                    dp[i][j] = 0;
                if(j == 0)
                    dp[i][j] = 1;
            }
        }
        
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= aim; j++){
                if(A[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j - A[i - 1]] + dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][aim];
    }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends