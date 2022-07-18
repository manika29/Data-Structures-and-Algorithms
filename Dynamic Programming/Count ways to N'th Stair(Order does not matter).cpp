//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    long long dp[1001];
    
    long long solve(int m){
        if(m==1 || m==2)
        return m;
        
        if(m<=0)
        return 0;
        
        if(dp[m]!=-1)
        return dp[m];
        
        long long a=solve(m-1);
        long long b=solve(m-2);
        
        dp[m]=1+min(a,b);
        return dp[m];
    }
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        memset(dp,-1,sizeof(dp));
        return solve(m);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends