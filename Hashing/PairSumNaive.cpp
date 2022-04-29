#include <bits/stdc++.h>
using namespace std;

bool isPair(int arr[],int m, int sum){
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            if(arr[i]+arr[j]==sum)
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[] = { 3,2,8,15,-8 };
    int sum=17;
    int m = sizeof(arr) / sizeof(arr[0]);
    bool ans=isPair(arr,m,sum);
    if(ans)
    cout<<"Pair exist";
    else
    cout<<"Pair doesn't exist";
 
    return 0;
}