class Solution {
    private:
     void dfs(int node, vector<int> adjLs[], vector<int> &vis) {
        vis[node] = 1;
        for (auto it : adjLs[node]) {
            if (!vis[it]) {
                dfs(it, adjLs, vis);
            }
        }
    }

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       vector<int> vis(n,0);
        vector<int> adj[n];
        
        for (int i = 0; i <edges.size(); i++) {
            
                int u=edges[i][0];
                int v=edges[i][1];
                adj[u].push_back(v);
                adj[v].push_back(u);

        }
        dfs(source,adj,vis);
        return (vis[destination]);
    }
};