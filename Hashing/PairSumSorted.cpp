#include <bits/stdc++.h>
using namespace std;

bool isPair(int arr[],int m, int sum){
    int left=0; int right=m-1;
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

int main()
{
    int arr[] = {2,5,8,12,30};
    int sum=17;
    int m = sizeof(arr) / sizeof(arr[0]);
    bool ans=isPair(arr,m,sum);
    if(ans)
    cout<<"Pair exist";
    else
    cout<<"Pair doesn't exist";
 
    return 0;
}