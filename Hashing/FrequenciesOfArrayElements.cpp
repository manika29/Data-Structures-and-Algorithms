#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[],int n){
    unordered_map<int,int>m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }

    for(auto e:m){
        cout<<e.first<<" "<<e.second<<" ";
    }
}

int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}