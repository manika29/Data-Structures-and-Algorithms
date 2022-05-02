#include <bits/stdc++.h>
using namespace std;

bool isSubarray(int arr[], int n,int k){
    int sum=arr[0]; int start=0;
    for(int i=1; i<n; i++){
        if(sum==k)
        return true;

        if(sum>k){
            sum=sum-arr[start];
            start++;
        }
        else{
            sum=sum+arr[i];
        }
    }
    return false;
}

int main()
{
    int n=5;
    int arr[n]={1,4,13,10,5};
    if(isSubarray(arr,n,17)){
        cout<<"Subarray Found";
    }
    else{
        cout<<"No such subarray exist";
    }
    return 0;
}