 #include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    // we have to take an array or a matrix to store the graph
    // but we can also use a vector of vectors to store the graph
    // using an array
    int adj[n+1][m+1];
    for(int i = 0; i < m ; i++){
        int u, v;
        cin >> u >> v;
        // mark the intersection as well as its reverse intersection
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    // now using a adjaceny list
    // this will help to reduce the space complexity as we are only storing the nodes of the graph
    // so insteaad of using an entire matrix we can use a vecctor of vectors
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++){
        int u, v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // if it is a directed graph 
        for(int i = 0; i < m; i++){
        int u, v;
        // u --> v
        adj[u].push_back(v);
    }
    // in case of weighted graphs we can use a pair to store the weight and the node
    vector<pair<int, int>> adj[n+1];
    for(int i = 0; i < m; i++){ 
        int u, v, wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    return 0;
}