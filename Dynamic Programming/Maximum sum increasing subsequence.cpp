// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    int maxis[n];
	    maxis[0]=arr[0];
	    for(int i=1;i<n;i++)
	    { maxis[i]=arr[i];
	        for(int j=0;j<i;j++)
	        {
	            if(arr[j]<arr[i])
	            maxis[i]=max(maxis[i],maxis[j]+arr[i]);
	        }
	    }
	    int res=maxis[0];
	    for(int i=1;i<n;i++)
	    {
	        res=max(res,maxis[i]);
	    }
	    
	    return res;
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

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends