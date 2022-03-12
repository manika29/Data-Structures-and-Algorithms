#include <bits/stdc++.h>
using namespace std;

void RightRotate(int arr[],int n,int k){
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
}
int main(){

    // Initialize the array
    int Array[] = { 1, 2, 3, 4, 5 };
 
    // Find the size of the array
    int N = sizeof(Array) / sizeof(Array[0]);
 
    // Initialize K
    int K = 4;
 
    // Call the function and
    // print the answer
    RightRotate(Array, N, K);
    for (int i = 0; i < N; i++) {
 
        cout << Array[i] << " ";
    }

return 0;
}