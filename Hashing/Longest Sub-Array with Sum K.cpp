// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
   { 
     int ps=0;
     int res=0;
     unordered_map<int,int> um;
     for(int i=0 ; i<N;i++)
     {
         ps+=A[i];
         if(ps==k)
          res=i+1;
         if(um.find(ps) == um.end())
          um.insert({ps,i});
         if(um.find(ps-k) != um.end())
          res=max(res, i- um[ps-k]);
     }
     return res;
   }

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends