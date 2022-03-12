#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        return mid;

        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }


    }

    return -1;
}

int main(){

    int n=6;
    int arr[n]={2,4,6,8,12,18};

    int result=binarySearch(arr,n,12);

    if(result){
        cout<<"Element found at index "<<result<<" ";
    }
    else
    cout<<"Element not found";

return 0;
}