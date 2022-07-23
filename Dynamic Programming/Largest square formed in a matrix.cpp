//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        int result=0;
        
        //single col
        for(int i=0; i<n; i++){
            result=max(result,mat[i][0]);
        }
        
        //single row
        for(int i=0; i<m; i++){
            result=max(result,mat[0][i]);
        }
        
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(mat[i][j]==0)
                continue;
                
                mat[i][j]=1+min(mat[i][j-1],min(mat[i-1][j-1],mat[i-1][j]));
                result=max(result,mat[i][j]);
            }
        }
        
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        
        Solution ob;
        cout<<ob.maxSquare(n, m, mat)<<"\n";
    }
    return 0;
}
// } Driver Code Ends