// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //Print spaces
        int space=row-1;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        //Print stars
        int col=1;
        int value=row;
        while(col<=(n-row+1)){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
return 0;
}