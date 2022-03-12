#include <bits/stdc++.h>
using namespace std;

int Kth_smallest(map<int,int>m, int k){
    int sum=0;
    for(auto it=m.rbegin(); it!=m.rend(); it++){
        sum=sum+it->second;

        if(sum>=k)
        return it->first;
    }
    return -1;
}
int main(){

    int n = 5;
    int k = 2;
    vector<int> arr = { 12, 3, 5, 7, 19 };
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        m[arr[i]]++; // mapping every element with it's
                        // frequency
    }
    int ans = Kth_smallest(m, k);
    cout << "The " << k << " largest element is " << ans
         << endl;

return 0;
}