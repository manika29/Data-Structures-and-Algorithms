class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        int maxLength=1;
        
        //for length 1
        for(int i=0; i<n; i++){
            dp[i][i]=true;
        }
        
        int start=0;
        
        //for length 2
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                start=i;
                dp[i][i+1]=true;
                maxLength=2;
            }
        }
        
        //for length 3
        for(int k=3; k<=n; k++){
            for(int i=0; i<n-k+1; i++){
                int j=i+k-1;
                if(dp[i+1][j-1] && s[i]==s[j]){
                    dp[i][j]=true;
                    if(k>maxLength){
                        start=i;
                        maxLength=k;
                    }
                }
                    
                
            }
        }
        string ans="";
        
        int e=start+maxLength-1;
        for(int i=start; i<=e; i++){
            ans+=s[i];
        }
        return ans;
    }
};