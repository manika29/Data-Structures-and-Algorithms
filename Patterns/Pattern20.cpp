// * * *
// * *
// *

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int j=1;
        int col=n-row+1;
        while(j<=col){
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        row++;
    }
return 0;
}