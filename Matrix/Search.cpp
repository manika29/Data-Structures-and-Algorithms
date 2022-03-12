#include <bits/stdc++.h>
using namespace std;

bool isfound(int arr[][3],int target, int row,int col){

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(arr[i][j]==target)
                return 1;
            }
        }
        return 0;
}

int main(){

    int arr[2][3]={1,2,3,4,5,6};
    int target=4;
    if(isfound(arr,target,2,3))
    cout<<"Found";
    else
    cout<<"Not Found";

return 0;
}