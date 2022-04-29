#include <bits/stdc++.h>
using namespace std;

bool isPair(int arr[],int s, int e, int sum){
    int left=s; int right=e;
    while(left<right){
        if(arr[left]+arr[right]==sum)
        return true;
        else if(arr[left]+arr[right]<sum){
            left++;
        }
        else
        right--;
    }
    return false;
}

bool tripleSum(int arr[],int m,int sum){
    for(int i=0; i<m; i++){
        if(isPair(arr,i+1,m-1,sum-arr[i])){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {2,3,4,8,9,20,40};
    int sum=32;
    int m = sizeof(arr) / sizeof(arr[0]);
    bool ans=tripleSum(arr,m,sum);
    if(ans)
    cout<<"Pair exist";
    else
    cout<<"Pair doesn't exist";
 
    return 0;
}