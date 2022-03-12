#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    int start=0; 
    int last=n-1;
    while(start<=last){
        swap(arr[start++],arr[last--]);
    }
}

int main(){
    int n=4;
    int arr[]={1,2,3,4};

    reverse(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}