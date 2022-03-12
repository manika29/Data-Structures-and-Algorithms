// A 
// B C
// C D E
// D E F G

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int count=row-1;
        while(col<=row){
            char ch='A'+count;
            cout<<ch<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
return 0;
}