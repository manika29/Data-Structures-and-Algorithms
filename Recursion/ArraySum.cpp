#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[], int n){
    //base case
    if(n==0)
    return 0;

    if(n==1)
    return arr[0];

    return arr[0]+getSum(arr+1,n-1);
}

int main(){

    int n=5;
    int arr[n]={2,4,9,9,9};

    int ans=getSum(arr,n);
    cout<<ans;

return 0;
}