class Solution {
private:
    // dfs traversal function 
    void dfs(int node, vector<int> adjLs[], vector<int>& vis) {
        // mark the node as visited
        vis[node] = 1; 
        for(auto it : adjLs[node]) {
            if(!vis[it]) {
                dfs(it, adjLs, vis); 
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> adjLs[V]; 
        // Convert adjacency matrix to adjacency list
        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                // Check if there's an edge between nodes i and j
                if(adj[i][j] == 1) {
                    adjLs[i].push_back(j); 
                    adjLs[j].push_back(i); 
                }
            }
        }
        vector<int> vis(V, 0);
        int cnt = 0; 
        for(int i = 0; i < V; i++) {
            // If the node is not visited
            if(!vis[i]) {
                // Counter to count the number of provinces 
                cnt++;
                dfs(i, adjLs, vis); 
            }
        }
        return cnt;
    }
};