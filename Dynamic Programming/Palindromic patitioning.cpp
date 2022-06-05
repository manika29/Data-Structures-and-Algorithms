// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int t[1001][1001];
    
    bool isPalindrome(string s,int i,int j){
        while(i<j){
            if(s[i]!=s[j])
            return false;
            
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    
    int solve(string s,int i,int j){
        if(i>=j)
        return 0;
        if(t[i][j]!=-1)
        return t[i][j];
        
        if(isPalindrome(s,i,j))
        return 0;
        int mn=INT_MAX;
        for(int k=i; k<=j-1; k++){
            int first,second;
            if(t[i][k]!=-1)
            first=t[i][k];
            else
            first=solve(s,i,k);
            
            if(t[k+1][j]!=-1)
            second=t[k+1][j];
            else
            second=solve(s,k+1,j);
            
            int tempans=1+first+second;
            
            mn=min(mn,tempans);
            t[i][j]=mn;
        }
        
        return t[i][j];
    }

    int palindromicPartition(string str)
    {
        // code here
        memset(t,-1,sizeof(t));
        int i=0;
        int j=str.length()-1;
        return solve(str,i,j);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends