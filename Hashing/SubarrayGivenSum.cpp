#include <bits/stdc++.h>
using namespace std;

bool isSubarray(int arr[], int n,int k){

    int prefix[n]={};
    unordered_set<int>s;
    prefix[0]=arr[0];
    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]+arr[i];
    }

    for(int i=0; i<n; i++){
        if(s.find(prefix[i]-k)!=s.end()){
            return true;
        }

        if(prefix[i]==k)
        return true;

        s.insert(prefix[i]);
    }

    return false;
}

int main()
{
    int n=6;
    int arr[n]={1,4,13,-3,-10,5};
    if(isSubarray(arr,n,17)){
        cout<<"Subarray Found";
    }
    else{
        cout<<"No such subarray exist";
    }
    return 0;
}