//1 1 1 1
//  2 2 2
//    3 3
//      4

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
        int value=n-(row-1);
        while(col<=value){
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
return 0;
}