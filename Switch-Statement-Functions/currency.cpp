#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int hundred=0,fifty=0,twenty=0,one=0;

    switch(1){

        case 1: hundred=hundred + n/100;
                n=n%100;
                cout<<hundred<<" hundred ruppee notes"<<endl;

        case 2: fifty=fifty + n/50;
                n=n%50;
                cout<<fifty<<" fifty ruppee notes"<<endl;

        case 3: twenty=twenty + n/20;
                n=n%20;
                cout<<twenty<<" twenty ruppee notes"<<endl;

        case 4: one=one + n/1;
                n=n%1;
                cout<<one<<" one ruppee notes"<<endl;
                break;

        default: cout<<"Invalid Input";
    }

return 0;
}