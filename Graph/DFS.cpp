#include <bits/stdc++.h>
using namespace std;

void dfsRec(vector<int> adj[],bool visited[],int s){
    visited[s]=true;
    cout<<s<<" ";

    for(int u:adj[s]){
        if(visited[u]==false){
            dfsRec(adj,visited,u);
        }
    }
}

void dfs(vector<int> adj[],int v,int s){
   bool visited[v+1];
   for(int i=0; i<v; i++){
       visited[i]=false;
   }
   dfsRec(adj,visited,s);
}

void printGraph(vector<int>adj[],int v){
        for(int i=0; i<v; i++){
            for(int x:adj[i])
                cout<<x<<" ";

        cout<<endl;
        }
}

void addEdge(vector<int> adj[], int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){

    int v=4;
    vector<int> adj[v];
    
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);

    printGraph(adj,v);
    dfs(adj,v,0);


return 0;
}