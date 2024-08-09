#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    // creating a graph using adjacency list
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // breadth first search
    vector<int> visited(n, 0);
    visited[0] = 1;
    queue<int>q;
    q.push(0);
    vector<int> res;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        res.push_back(node);
        for(auto it: adj[node]){
            if(!visited[it]){
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return 0;
}