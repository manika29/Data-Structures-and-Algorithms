#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1="acbcf";
    string s2="abcdaf";
    int m=s1.length();
    int n=s2.length();

    //fill the table
    int dp[m+1][n+1];
    for(int i=0; i<=m; i++){
        dp[i][0]=0;
    }
    for(int j=0; j<=n; j++){
        dp[0][j]=0;
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s1[i-1]==s2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }

    //print lcs
    string ans="";
    int i=m; int j=n;
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            ans.push_back(s1[i-1]);
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1])
        i--;
        else
        j--;
    }

    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}