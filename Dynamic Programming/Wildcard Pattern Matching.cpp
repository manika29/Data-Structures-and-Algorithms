//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
  
    bool solve(string pattern,string str,int i,int j,vector<vector<int>> &dp){
        
        //base case
        if(i<0 && j<0)
        return true;
        
        if(i<0 && j>=0)
        return false;
        
        if(j<0 && i>=0){
            for(int ind=0; ind<=i; ind++){
                if(pattern[ind]!='*')
                return false;
            }
            return true;
        }
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        
        //logic
        if(pattern[i]==str[j] || pattern[i]=='?')
        return dp[i][j]=solve(pattern,str,i-1,j-1,dp);
        
        else if(pattern[i]=='*')
        return dp[i][j]=solve(pattern,str,i-1,j,dp) || solve(pattern, str,i,j-1,dp);
        
        return dp[i][j]=false;
    }
  
/*You are required to complete this method*/
    int wildCard(string pattern,string str)
    {
        int m=pattern.size();
        int n=str.size();
        
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
        return solve(pattern,str, m-1,n-1,dp);
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}

// } Driver Code Ends