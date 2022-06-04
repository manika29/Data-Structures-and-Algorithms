// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	    //create lis array
	   int n=nums.size();
	   int lis[n];
       lis[0]=1;
       for(int i=1; i<n; i++){
           lis[i]=1;
           for(int j=0; j<i; j++){
               if(nums[j]<nums[i]){
                   lis[i]=max(lis[j]+1,lis[i]);
               }
           }
       }
       
       //create lds array
       int lds[n];
       lds[n-1]=1;
       for(int i=n-2; i>=0; i--){
           lds[i]=1;
           for(int j=n-1; j>i; j--){
               if(nums[j]<nums[i]){
                   lds[i]=max(lds[j]+1,lds[i]);
               }
           }
       }
       
       //compute length
       int res=lds[0]+lis[0]-1;
       for(int i=1; i<n; i++){
           res=max(res,lis[i]+lds[i]-1);
       }
       
       return res;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends