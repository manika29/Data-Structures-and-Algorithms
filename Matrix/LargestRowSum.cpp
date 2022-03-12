#include <bits/stdc++.h>
using namespace std;
int main(){
    int max=0;
    int ans;
    int arr[3][3]={3,4,11,2,12,1,7,8,7};

    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum=sum+arr[i][j];
        }
        if(sum>max){
            max=sum;
            ans=i;
        }
    }

      cout<<ans;
return 0;
}