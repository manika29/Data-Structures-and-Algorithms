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
   
   int wordBreak(string A, vector<string> &B) {
       unordered_map<string,int> mp;
       for(int i=0;i<B.size();i++){
           mp[B[i]]++;
       }
       if(mp[A]){
           return true;
       }
       
       for(int i=1;i<=A.size();i++){
           string left=A.substr(0,i);
           if(mp[left] &&  wordBreak(A.substr(i),B)){
               return true;
           }
       }
       return false;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends