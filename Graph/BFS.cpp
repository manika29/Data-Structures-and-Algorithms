#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[],int v,int s){
    bool visited[v+1];
    for(int i=0; i<v; i++)
    visited[i]=false;

    queue<int>q;
    visited[s]=true;
    q.push(s);

    while(!q.empty()){
        int ele=q.front();
        q.pop();
        cout<<ele<<" ";

        for(int v:adj[ele]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
            
        }
    }
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
    bfs(adj,v,0);


return 0;
}