class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int x=str1.length();
        int y=str2.length();
        
        //create matrix
        int dp[x+1][y+1];
        for(int i=0; i<=x; i++){
            dp[i][0]=0;
        }
        
        for(int j=0; j<=y; j++){
            dp[0][j]=0;
        }
        
        for(int i=1; i<=x; i++){
            for(int j=1; j<=y; j++){
                if(str1[i-1]==str2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        //print scs
        string ans="";
        int i=x;
        int j=y;
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                ans.push_back(str1[i-1]);
                i--;
                j--;
            }
            else if(dp[i][j-1]>=dp[i-1][j]){
                ans.push_back(str2[j-1]);
                j--;
            }
            else{
               ans.push_back(str1[i-1]);
               i--; 
            }
                
        }
        
        while(i>0){
            ans.push_back(str1[i-1]);
            i--;
        }
        while(j>0){
            ans.push_back(str2[j-1]);
            j--;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};