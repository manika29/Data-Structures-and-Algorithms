// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int longestCommonSubsequence(string text1, string text2) {
        int x=text1.length();
        int y=text2.length();
        
        int dp[x+1][y+1];
        for(int i=0; i<=x; i++){
            dp[i][0]=0;
        }
        
        for(int j=0; j<=y; j++){
            dp[0][j]=0;
        }
        
        for(int i=1; i<=x; i++){
            for(int j=1; j<=y; j++){
                if(text1[i-1]==text2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[x][y];
    }
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int lcs;
	    lcs=longestCommonSubsequence(str1,str2);
	    int m=str1.length();
	    int n=str2.length();
	    
	    int deletions=m-lcs;
	    int insertions=n-lcs;
	    return deletions+insertions;
	    
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends