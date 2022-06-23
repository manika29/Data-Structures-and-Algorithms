// class Solution {
// public:
    
//     int solve(vector<int> &nums, int n){
//         if(n<=0)
//             return 0;
         
//         int ans=0;
//         ans+=max((nums[n-1]+solve(nums,n-2)),solve(nums,n-1));
//         return ans;
//     }
    
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         return solve(nums,n);
//     }
// };

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        vector<int>dp(n,0);
        if(n>=1)
           dp[0]=nums[0];
        if(n>=2)
            dp[1]=max(nums[0],nums[1]);
        
        for(int i=2; i<n; i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        
        return dp[n-1];
    }
};