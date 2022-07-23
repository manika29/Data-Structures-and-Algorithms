class Solution {
public:
    
    int solve(int ind,vector<int>& arr, int k,vector<int> &dp){
        int n=arr.size();
        if(ind==n)
            return 0;
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        int len=0;
        int maxSum=INT_MIN,maxi=INT_MIN;
        for(int i=ind; i<min(n,ind+k); i++){
            len++;
            maxi=max(maxi,arr[i]);
            int sum=len*maxi + solve(i+1,arr,k,dp);
            maxSum=max(maxSum,sum);
        }
        
        return dp[ind]=maxSum;
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n,-1);
        return solve(0,arr,k,dp);
    }
};