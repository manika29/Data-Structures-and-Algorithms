// A B C 
// D E F 
// G H I 

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int count=0;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+count;
            cout<<ch<<" ";
            col++;
            count++;
        }
        cout<<endl;
        row++;
    }
return 0;
}