#include <bits/stdc++.h>
using namespace std;

 int adj[4][4]={};

void printGraph(int v){
    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

void addEdge(int adj[4][4], int u, int v){
    adj[u][v]=1;
    adj[v][u]=1;
}


int main(){

    int vertices=4;

    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,4);
    addEdge(adj,3,1);

    printGraph(4);

return 0;
}