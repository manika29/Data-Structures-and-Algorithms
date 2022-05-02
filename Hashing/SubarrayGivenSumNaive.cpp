#include <bits/stdc++.h>
using namespace std;

bool isSubarray(int arr[], int n,int k){
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum=sum+arr[j];
            if(sum==k)
            return true;
        }
    }
    return false;
}

int main()
{
    int n=6;
    int arr[n]={1,4,13,-3,-10,5};
    if(isSubarray(arr,n,17)){
        cout<<"Subarray Found";
    }
    else{
        cout<<"No such subarray exist";
    }

    return 0;
}