#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";

    int n=10;
    for(int i=0; i<n; i++){
        int nextN=a+b;
        cout<<nextN<<" ";

        a=b;
        b=nextN;
    }
return 0;
}