#include<unordered_map>
#include<queue>
#include<list>
#include<queue>

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    //adjacency list
    unordered_map<int,list<int>>adj;
    for(int i=0; i<edges.size(); i++){
        int u=edges[i].first-1;
        int v=edges[i].second-1;
        
        adj[u].push_back(v);
    }
    
    //step1 : find indegree of all vertices
    vector<int>indegree(n);
    for(auto i:adj){
        for(auto j:i.second){
            indegree[j]++;
        }
    }
    
    //step2 : push all nodes with 0 indegree on queue
    queue<int>q;
    for(int i=0; i<n; i++){
        if(indegree[i]==0)
            q.push(i);
    }
    
    //step3 : do bfs
    int cnt=0;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        cnt++;
        for(auto neighbor : adj[front]){
            indegree[neighbor]--;
            if(indegree[neighbor]==0){
                q.push(neighbor);
            }
        }
    }
    if(cnt==n)
        return false;
    else
        return true;
}