// 123
// 456
// 789

//Method 1 - Using Formula
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(j+n*(i-1))<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
return 0;
}


//Method 2 - Using Count Variable
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// return 0;
// }