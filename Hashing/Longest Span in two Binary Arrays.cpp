// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:

    int lenOfLongSubarr(int arr[],int n,int k){
     int ps=0;
     int res=0;
     unordered_map<int,int> um;
     for(int i=0 ; i<n;i++)
     {
         ps+=arr[i];
         if(ps==k)
          res=i+1;
         if(um.find(ps) == um.end())
          um.insert({ps,i});
         if(um.find(ps-k) != um.end())
          res=max(res, i- um[ps-k]);
     }
     return res;
    }

    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            // code here
            int temp[n];
            for(int i=0; i<n; i++){
                temp[i]=arr1[i]-arr2[i];
            }
            
            return lenOfLongSubarr(temp,n,0);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends