// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        unordered_map<int,int>m;
        for(int x: arr){
            if(x<=P)
            m[x]++;
        }
        
        unordered_map<int,int>::iterator it;
        for(int i=1; i<=N; i++){
            it=m.find(i);
            if(it==m.end()){
                arr[i-1]=0;
            }
            else{
                arr[i-1]=it->second;
            }
        }
    }
};