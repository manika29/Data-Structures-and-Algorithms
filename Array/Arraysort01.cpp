#include <bits/stdc++.h>
using namespace std;

void sortArr(int arr[],int n){
    int i=0;
    int j=n-1;

    while(i<j){
        while(arr[i]==0 && i<j)
        i++;

        while(arr[j]==1 && i<j)
        j--;
          
        if(arr[i]==1 && arr[j]==0 && i<j){
        swap(arr[i],arr[j]);
         i++;
         j--;
        }
       
        
    }
}

int main(){

    int n=8;
    int arr[]={1,1,0,0,0,0,1,0};

    sortArr(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}