//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <bits/stdc++.h>
using namespace std;
int main(){
        int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //Print spaces - first triangle
        int space=n-row;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        //Print second triangle
        int col=1;
        while(col<=row){
            cout<<col<<" ";
            col++;
        }

        //Print third triangle
        int start=row-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        
        cout<<endl;
        row++;
    }
return 0;
}