#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){

    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot)
        cnt++;
    }

    //place pivot at the right place
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);

    int i=s;
    int j=e;


    //place smaller elements at left of pivot and larger elements at right of pivot
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot)
        i++;

        while(arr[j]>pivot)
        j--;

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }

    }

}

void quickSort(int arr[],int s,int e){

    if(s>e)
    return;

    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){

    int n=5;
    int arr[n]={2,4,1,6,9};

    quickSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}