#include <bits/stdc++.h>
using namespace std;
int main(){

    int m=3;
    int n=3;

    //create
    int** arr=new int* [m];
    for(int i=0; i<m; i++){
        arr[i]=new int [n];
    }

    //input
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    //output
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //delete
    for(int i=0; i<m; i++){
        delete []arr[i];
    }

    delete []arr;


return 0;
}