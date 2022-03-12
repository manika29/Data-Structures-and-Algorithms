#include <bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[],int n,int k){

    //base case
    if(n==0)
    return false;

    if(arr[0]==k)
    return true;

    else
    LinearSearch(arr+1,n-1,k);
}

int main(){

    int n=5;
    int arr[n]={2,4,9,9,9};
    int k=5;
    
 if(LinearSearch(arr,n,k))
  cout<<"Element Found";

  else
  cout<<"Element does not exist";

return 0;
}