class Solution {
public:
    int dp[101][10001];
    
    int solve(int k, int n){
        if(n == 0 || n == 1){
            return n;
        }
        if(k == 1){
            return n;
        }
        if(dp[k][n] != -1){
            return dp[k][n];
        }
        int mn = INT_MAX;
        int l = 1;
        int r = n;
        while(l<=r){
            int mid = l+ (r-l) /2;
            int left = solve(k-1,mid-1);
            int right = solve(k,n-mid);
            int temp = 1 + max(left,right);
            if (left<right)  
                l=mid+1;
            else
                r=mid-1;
            mn = min(mn,temp);
   
        }
        return dp[k][n] = mn;
    }
    
    int superEggDrop(int k, int n) {
        
       memset(dp,-1,sizeof(dp));
        int ans = solve(k,n);
        return ans;
    }
};