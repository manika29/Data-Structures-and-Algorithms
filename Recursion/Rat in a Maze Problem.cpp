// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
   private:
   bool isSafe(int x,int y,int n,vector<vector<int>>&m,vector<vector<int>>visited){
       if((x>=0&&x<n) &&(y>=0 && y<n)&&(m[x][y]==1) &&(visited[x][y]==0)){
           return true;
       }
       else {
           return false ;
       }
       
   }
   void solve(vector<string>&ans,vector<vector<int>>&m,vector<vector<int>>visited,string path,int x , int y,int n){
       // base case 
       if(x==n-1 && y==n-1){
           ans.push_back(path);
           return;
       }
       // we have reached X,Y
       visited[x][y]=1;
       
       // where to go 4 options *Down *UP *Left *Right 
       
        // down case
       int newx=x+1;
       int newy=y;
       
       if(isSafe(newx,newy,n,m,visited)){
           path.push_back('D');
           solve(ans,m,visited,path,newx,newy,n);
           path.pop_back();
       }
       
       // Up case
       newx = x-1;
       newy = y;
       if(isSafe(newx,newy,n,m,visited)){
           path.push_back('U');
           solve(ans,m,visited,path,newx,newy,n);
           path.pop_back();
       }
       // right case 
       
       newx = x;
       newy = y+1;
       if(isSafe(newx,newy,n,m,visited)){
           path.push_back('R');
           solve(ans,m,visited,path,newx,newy,n);
           path.pop_back();
       }
       
       // left case 
       
       newx = x;
       newy = y-1;
       if(isSafe(newx,newy,n,m,visited)){
           path.push_back('U');
           solve(ans,m,visited,path,newx,newy,n);
           path.pop_back();
       }
       
       // back tracking to 0 as many different path may be present
       visited[x][y]=0;
   }
   public:
   vector<string> findPath(vector<vector<int>>&m, int n) {
       
       // exception case 
       vector<string> ans;
       if(m[0][0]==0){
           return ans;
       }
      
       int srcx=0;
       int srcy=0;
       string path="";
       vector<vector<int>> visited = m;
       // marking all 0
       for(int i =0;i<n;i++){
           for(int j = 0;j<n;j++){
               visited[i][j]=0;
           }
       }
       solve(ans,m,visited,path,srcx,srcy,n);
       sort(ans.begin(),ans.end());
       return ans;
   }
};
    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends