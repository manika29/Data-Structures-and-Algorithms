#include <bits/stdc++.h>
using namespace std;

int mySqrt(int n) {
        int s=0;
        int e=n;
        int ans=-1;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            int square=mid*mid;
            if(square==n)
                return mid;
            if(square<n){
                ans=mid;
                s=mid+1;
            }
            else
                e=mid-1;
        }
        
       return ans; 
    }

    double morePrecision(int n, int p, int value){
        double factor=1;
        double ans=value;

        for(int i=0; i<p; i++){
            int factor=factor/10;
            for(double j=ans; j*j<n; j=j+factor){
                ans=j;
            }
        }
        return ans;
    }

int main(){

    int n=37;
    int tempSol=mySqrt(n);
    cout<<morePrecision(n,3,tempSol);

return 0;
}