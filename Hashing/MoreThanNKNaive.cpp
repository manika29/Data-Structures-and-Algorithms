#include <bits/stdc++.h>
using namespace std;

void NKOccurrence(int arr[],int n,int k){
    sort(arr,arr+n);
    int i=1;
    int count=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            count++;
            i++;
        }

        if(count>n/k)
        cout<<arr[i]<<" ";

        count=1;
        i++;
        
    }
}

int main()
{
    int n=8;
    int arr[]={30,10,20,20,10,20,30,30};
    int k=4;

    NKOccurrence(arr,n,k);
   
    return 0;
}