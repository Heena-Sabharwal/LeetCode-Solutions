class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);

        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(n, false);

        return dfs( adj, visited, source, destination);
    }

    bool dfs(vector<vector<int>> &adj, vector<bool>&visited, int node, int destination){
        
        visited[node]=true;

        if(node==destination)
            return true;
        

        for(auto num:adj[node]){
            if(!visited[num])
                if(dfs(adj,visited,num,destination))
                    return true;
        }

        return false;
    }
};