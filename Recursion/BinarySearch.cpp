#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){

    if(s>e)
    return false;

    int mid=s+(e-s)/2;

    if(arr[mid]==k)
    return true;

    if(arr[mid]<k)
    return binarySearch(arr,mid+1,e,k);

    else
    return binarySearch(arr,s,mid-1,k);
}

int main(){

    int n=4;
    int arr[]={3,4,5,8};

    if(binarySearch(arr,0,3,9))
    cout<<"Found";
    else
    cout<<"Not Found";

return 0;
}