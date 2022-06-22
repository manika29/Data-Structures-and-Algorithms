class Solution {
public:
    
    int solve(int index,int buy,int cap,vector<int>&prices, int n,vector<vector<vector<int>>> &dp){
        
        if(index==n || cap==0)
            return 0;
        
        if(dp[index][buy][cap]!=-1)
            return dp[index][buy][cap];
        
        int profit=0;
        
        if(buy==1){
            profit=max(-prices[index]+solve(index+1,0,cap,prices,n,dp),0+solve(index+1,1,cap,prices,n,dp));
        }
        else
            profit=max(prices[index]+solve(index+1,1,cap-1,prices,n,dp),0+solve(index+1,0,cap,prices,n,dp));
        
        return dp[index][buy][cap]=profit;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(k+1,vector<int>(k+1,-1)));
        return solve(0,1,k,prices,n,dp);
    }
};