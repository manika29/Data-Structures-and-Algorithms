#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[],int n){
    unordered_set<int>s;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            s.insert(arr[i]);
        }
    }

    int i=1;
    while(true){
        if(s.find(i)==s.end())
        return i;
        else
        i++;
    }

}

int main()
{
    int n=5;
    int arr[n]={1,1,0,-1,-2};
    int ans=missingNumber(arr,n);
    cout<<ans;
    return 0;
}