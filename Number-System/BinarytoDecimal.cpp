#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int res=0;
    int base=1;
    while(n!=0){
        int rem=n%10;
        res=res+rem*base;
        base=base*2;
        n=n/10;
    }
    cout<<res;


return 0;
}