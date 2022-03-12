// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include <bits/stdc++.h>
using namespace std;
int main(){
        int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //Print first triangle
        int col=1;
        while(col<=(n-(row-1))){
            cout<<col<<" ";
            col++;
        }

        //Print second triangle
        int start=2*(row-1);
        while(start){
            cout<<"*"<<" ";
            start--;
        }

        // Print third triangle
       int value=n-(row-1);
       while(value){
           cout<<value<<" ";
           value--;
       }
        
        cout<<endl;
        row++;
    }
return 0;
}