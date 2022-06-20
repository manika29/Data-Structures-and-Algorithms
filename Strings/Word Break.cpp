// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:

    int dictionaryContain(string word,vector<string> &B){
        int size=B.size();
        for(int i=0; i<size; i++){
            if(B[i]==word)
            return true;
        }
        return false;
    }

    int wordBreak(string A, vector<string> &B) {
        //code here
        int n=A.size();
        bool wb[n+1];
        memset(wb, 0, sizeof(wb));
        if(n==0)
        return true;
        
        for(int i=1; i<=n; i++){
            if(wb[i]==false && dictionaryContain((A.substr(0,i)),B))
            wb[i]=true;
            
            if(wb[i]==true){
                if(i==n)
                return true;
                for(int j=i+1; j<=n; j++){
                    if(wb[j]==false && dictionaryContain((A.substr(i,j-1)),B))
                        wb[j]=true;
                        
                        if(j==n && wb[j]==true)
                        return true;
                }
            }
        }
        
        return false;
    }
};

