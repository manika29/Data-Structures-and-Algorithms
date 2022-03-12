#include <bits/stdc++.h>
using namespace std;
int main(){

    int a,b,res;
    char op;

    cout<<"Enter the values of a and b : "<< " ";
    cin>>a>>b;

    cout<<endl;

    cout<<"Enter the operation to be performed : "<<" ";
    cin>>op;

    switch(op){
        case '+': res=a+b;
                  cout<<res;
                  break;

        case '-':   res=a-b;
                    cout<<res;
                    break;

         case '*': res=a*b;
                  cout<<res;
                  break;

         case '/': res=a/b;
                  cout<<res;
                  break;

         case '%': res=a%b;
                  cout<<res;
                  break;

        default: cout<<"Invalid operation";
    }

    cout<<endl;

return 0;
}