#include<unordered_map>
#include<stack>
#include<queue>
#include<list>

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    //adjacency list
    unordered_map<int,list<int>>adj;
    for(int i=0; i<e; i++){
        int u=edges[i][0];
        int v=edges[i][1];
        
        adj[u].push_back(v);
    }
    
    //step1 : find indegree of all vertices
    vector<int>indegree(v);
    for(auto i:adj){
        for(auto j:i.second){
            indegree[j]++;
        }
    }
    
    //step2 : push all nodes with 0 indegree on queue
    queue<int>q;
    for(int i=0; i<v; i++){
        if(indegree[i]==0)
            q.push(i);
    }
    
    //step3 : do bfs
    vector<int>ans;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);
        for(auto neighbor : adj[front]){
            indegree[neighbor]--;
            if(indegree[neighbor]==0){
                q.push(neighbor);
            }
        }
    }
    return ans;
    
}