// Input : my name is manika
// Output : manika is name my

#include <bits/stdc++.h>
using namespace std;

void reverseWords(string &str){
    int s=0, e=0, n=str.size();
    for(int i=0; i<n; i++){
        if(str[i]==' ' || i==n-1){
            e=i-1;
            
            if(i==n-1) 
                e=i;

            while(s<e){
                swap(str[s], str[e]);
                s++;
                e--;
            }
            s=i+1;
        }
    }
}

void reverse(string &str){
    int n=str.length();
    int e=n-1;
    int s=0;
    while(s<=e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}

int main(){

    string s="my name is manika";
    cout<<s<<endl;

    reverseWords(s);
    reverse(s);
    cout<<s;

return 0;
}