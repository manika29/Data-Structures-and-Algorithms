#include <bits/stdc++.h>
using namespace std;
int main(){

    int Binary[100];
    int n;
    cin>>n;
    int i=0;
    while(n>0){
        Binary[i]=n%2;
        n=n/2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    cout << Binary[j];
    cout<<endl;

return 0;
}   