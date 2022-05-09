#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[],int n,int k){
      int res=0;
      for(int i=0; i<n; i++){
          int sum=0;
          for(int j=i; j<n; j++){
              sum+=arr[j];
              if(sum==k){
                  res=max(res,j-i+1);
              }
          }
      }
      return res;
}

int main()
{
    int n=7;
    int arr[]={5,8,-4,-4,9,-2,2};
    int sum=0;

    int ans=longestSubarray(arr,n,sum);
    cout<<ans;
    return 0;
}