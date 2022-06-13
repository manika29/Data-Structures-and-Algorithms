#include<unordered_map>
#include<list>
#include<queue>

// bool isCycleBfs(int src,unordered_map<int,bool> &visited, unordered_map<int,list<int>> &adj){
//     unordered_map<int,int>parent;
//     visited[src]=1;
//     parent[src]=-1;
//     queue<int>q;
//     q.push(src);
    
//     while(!q.empty()){
//         int front=q.front();
//         q.pop();
        
//         for(auto neighbor:adj[front]){
//             if(visited[neighbor]==true && neighbor!=parent[front])
//                 return true;
//             else if(!visited[neighbor]){
//                 visited[neighbor]=1;
//                 parent[neighbor]=front;
//                 q.push(neighbor);
//             }
//         }
//     }
    
//     return false;
// }

bool isCycleDfs(int node,int parent,unordered_map<int,bool> &visited, unordered_map<int,list<int>> &adj){
    visited[node]=1;
    
    for(auto neighbor: adj[node]){
        if(!visited[neighbor]){
            bool cycle=isCycleDfs(neighbor,node,visited,adj);
                if(cycle==1)
                    return true;
        }
        else if(neighbor!=parent)
            return true;
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    //Adjacency List
    unordered_map<int,list<int>>adj;
    for(int i=0; i<m; i++){
        int u=edges[i][0];
        int v=edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    //To handle disconnected omponents
    unordered_map<int,bool>visited;
    
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans=isCycleDfs(i,-1,visited,adj);
            if(ans==1)
                return "Yes";
        }
    }
    return "No";
}
