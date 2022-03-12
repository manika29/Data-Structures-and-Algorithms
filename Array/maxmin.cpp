#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=4;
    int arr[]={15,2,4,10};

    int max=arr[0];
    int min=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>max)
        max=arr[i];

        if(arr[i]<min)
        min=arr[i];
    }

    cout<<max<<" "<<min<<" ";

return 0;
}