// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  bool isPossible(int arr[],int n,int m, long long int mid){
    long long int painterCount = 1;
    long long int minTime=0;
    
    for(int i=0; i<n; i++){
        if(minTime+arr[i]<=mid){
            minTime+=arr[i];
        }
        else{
                painterCount++;
            if(painterCount>m || arr[i]>mid)
                return false;
            else
                minTime=arr[i];
        }
    }
    return true;
}
 long long minTime(int arr[], int n, int k){
        long long sum = 0,res = -1;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        long long low = *max_element(arr,arr+n),high = sum;
        while(low<=high){
            long long mid = (low+high)/2;
            if(isPossible(arr,n,k,mid)){
                res = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends