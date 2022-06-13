#include<unordered_map>
#include<queue>
#include<list>

bool checkCycle(int node, unordered_map<int,bool> &visited, unordered_map<int,bool> &dfsVisited, unordered_map<int,list<int>> &adj){
    visited[node]=1;
    dfsVisited[node]=1;
    
    for(auto neighbor : adj[node]){
        if(!visited[neighbor]){
            bool cycle=checkCycle(neighbor,visited,dfsVisited,adj);
            if(cycle)
                return true;
        }
        else if(dfsVisited[neighbor])
            return true;
    }
    dfsVisited[node]=false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    unordered_map<int,list<int>>adj;
    for(int i=0; i<edges.size(); i++){
        int u=edges[i].first;
        int v=edges[i].second;
        
        adj[u].push_back(v);
    }
    
    //To handle disconnected omponents
    unordered_map<int,bool>visited;
    unordered_map<int,bool>dfsVisited;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans=checkCycle(i,visited,dfsVisited,adj);
            if(ans==1)
                return 1;
        }
    }
    return 0;
}