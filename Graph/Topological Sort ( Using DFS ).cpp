#include<unordered_map>
#include<stack>
#include<list>

void topSort(int node,unordered_map<int,bool> &visited, stack<int> &s, unordered_map<int,list<int>> &adj){
    visited[node]=1;
    
    for(auto neighbor : adj[node]){
        if(!visited[neighbor]){
            topSort(neighbor,visited,s,adj);
        }
        
    }
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    unordered_map<int,list<int>>adj;
    for(int i=0; i<e; i++){
        int u=edges[i][0];
        int v=edges[i][1];
        
        adj[u].push_back(v);
    }
    
    //To handle disconnected omponents
    unordered_map<int,bool>visited;
    stack<int>s;
    for(int i=0; i<v; i++){
        if(!visited[i]){
            topSort(i,visited,s,adj);
        }
    }
    vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}