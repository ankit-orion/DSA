// to store a graph you need to figure out whther it a zero based or one based indexing
#include<iostream>
using namespace std;
int main(){
       //^ creating graph
       int n, m;
       cin >> n >> m;
       int adj[n+1][n+1];
       for(int i = 0; i < m; i++){
              int u, v;
              cin >> u >> v;
              adj[u][v] = 1;
              adj[v][u] = 1;
       }
       //! printing the values 
       for(int i = 0; i < n+1; i++){
              for(int j = 0; j < n+ 1; j++){
                     cout << adj[i][j]<<" ";
              }
              cout << endl;
       }
}