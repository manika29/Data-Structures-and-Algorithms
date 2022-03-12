#include <bits/stdc++.h>
using namespace std;
int main(){

    string s="manika sharma";
    int n=s.size();
    string str="@40";
    for(int i=0; i<n; i++){
        if(s[i]==' ')
            s.replace(i,1,str);
    }
    cout<<s;

return 0;
}