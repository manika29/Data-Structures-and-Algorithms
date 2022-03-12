#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=5;

    //create
    int* arr=new int [5];

    //input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //output
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    //delete
    delete []arr;

return 0;
}