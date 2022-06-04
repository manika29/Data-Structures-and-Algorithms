// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int ceilIndex(int arr[],int l,int r,int x){
        while(r>l){
            int mid=l+(r-l)/2;
            if(arr[mid]>=x)
            r=mid;
            else
            l=mid+1;
        }
        
        return r;
    }
	int longestSubsequence(int n, int a[])
    {
       // your code here
       int tail[n];
       tail[0]=a[0];
       int len=1;
       for(int i=1; i<n; i++){
           if(a[i]>tail[len-1])
           {
               tail[len]=a[i];
               len++;
           }
           else{
               int c=ceilIndex(tail,0,len-1,a[i]);
               tail[c]=a[i];
           }
       }
       
       return len;
    }
	int minDeletions(int arr[], int n) 
	{ 
	    // Your code goes here
	    return n-longestSubsequence(n,arr);
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

	    

	    Solution ob;
	    cout << ob.minDeletions(arr, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends