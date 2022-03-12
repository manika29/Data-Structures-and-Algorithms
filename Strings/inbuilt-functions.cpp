#include <bits/stdc++.h>
using namespace std;
int main(){

    //getline with delimiter
    char arr[20];
    cin.getline(arr,20,',');
    cout<<arr;

    //length
    char arr[20];
    cin.getline(arr,20);
    cout<<strlen(arr);

    //strcpy
    char arr1[20];
    char arr2[20];
    
    strcpy(arr1,"abcd");
    strcpy(arr2,"efgh");

    cout<<arr1<<arr2;

    //strcmp

    char arr1[20];
    char arr2[20];
    
    strcpy(arr1,"abcd");
    strcpy(arr2,"efgh");

    cout<<strcmp(arr1,arr2);


return 0;
}