#include <bits/stdc++.h>
using namespace std;

int getIntersection(int a[],int b[],int m,int n){
    int res=0;
    for(int i=0; i<m; i++){
        bool flag=false;
        for(int j=0; j<i-1; j++){
            if(a[j]==a[i]){
                flag=true;
                break;
            }
        }
        if(flag==true)
           continue;

        for(int j=0; j<n; j++){
            if(a[i]==b[j]){
                res++;
                break;
            }
        }
    }

    return res;
}

int main()
{
    int arr1[] = { 10, 15, 20, 15, 30, 30, 5 };
    int arr2[] = { 30, 5, 30, 80 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    int ans=getIntersection(arr1, arr2, m, n);
    cout<<ans;
 
    return 0;
}