// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
const int CHAR=256; 
int fact(int n) 
{ 
   return (n <= 1) ? 1 : n * fact(n - 1); 
} 

int rank(string str) 
{ 
   
   int res = 1; 
   int n=str.length();
   long long mul= fact(n);
   int count[CHAR]={0};
   for(int i=0;i<n;i++)
       count[str[i]]++;
        for(int i=0;i<n;i++)
        if(count[str[i]]>1)
        return 0;
   for(int i=1;i<CHAR;i++)
       count[i]+=count[i-1];
   for(int i=0;i<n-1;i++){
       mul=mul/(n-i);
       res=res+count[str[i]-1]*mul;
       for(int j=str[i];j<CHAR;j++)
           count[j]--;
   }
   return res%1000003; 
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.rank(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends