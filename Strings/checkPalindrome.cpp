#include <bits/stdc++.h>
using namespace std;

int getLength(char s[]){
    int count=0;
    for(int i=0; s[i]!='\0'; i++){
        count++;
    }
    return count;
}

char toLowerCase(char ch){
    if(ch>='a' && ch<='z')
        return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
    
}

bool checkPalindrome(char s[],int n){
    int start=0;
    int e=n-1;

    while(start<=e){
        if(toLowerCase(s[start])!=toLowerCase(s[e]))
            return 0;
        

        else{
         start++;
         e--;
        }
    }

    return 1;
}

int main(){

    char s[20];
    cin>>s;
    int n=getLength(s);

    cout<<checkPalindrome(s,n);


return 0;
}