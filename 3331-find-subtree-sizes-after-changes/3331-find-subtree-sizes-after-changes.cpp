class Solution {
public:
    void updateParent(int node, vector<vector<int>>& original,
                      vector<int>& parent, vector<int>& last, string& s) {

        int c = s[node] - 'a';
        int old = last[c];

        if(old != -1) {
            parent[node] = old;
        }

        last[c] = node;

        for(int child : original[node]) {
            updateParent(child, original, parent, last, s);
        }

        last[c] = old;
    }

    int dfs(int node, vector<vector<int>>& adj, vector<int>& ans) {
        int size = 1;

        for(int child : adj[node]) {
            size += dfs(child, adj, ans);
        }

        ans[node] = size;
        return size;
    }

    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = parent.size();

        // Build original tree
        vector<vector<int>> original(n);

        for(int i = 1; i < n; i++) {
            original[parent[i]].push_back(i);
        }

        // Find nearest matching ancestors
        vector<int> last(26, -1);
        updateParent(0, original, parent, last, s);

        // Build modified tree
        vector<vector<int>> adj(n);

        for(int i = 1; i < n; i++) {
            adj[parent[i]].push_back(i);
        }

        // Calculate subtree sizes
        vector<int> ans(n, 0);
        dfs(0, adj, ans);

        return ans;
    }
};


// class Solution {
// public:
//     vector<int> findSubtreeSizes(vector<int>& parent, string s) {
//         vector<pair<int,int>>add;

//         for(int i=1;i<parent.size();i++){
//             int par=parent[i];
//             while(par!=-1){
//                 if(s[par]==s[i]){
//                     add.push_back({i,par});
//                     break;
//                 }
//                 else{
//                     par=parent[par];
//                 }
//             }
//         }

//         for(int i=0;i<add.size();i++){
//             parent[add[i].first]=add[i].second;
//         }

//         vector<vector<int>>adj(parent.size());
//         for(int i=1;i<adj.size();i++){
//             adj[parent[i]].push_back(i);
//         }
//         vector<int>ans(parent.size(),0);
//         dfs(adj,0,ans);

//         return ans;
//     }
    
//     int dfs(vector<vector<int>>&adj, int node, vector<int> &ans){
//         int size=1;

//         for(int child:adj[node]){
//             size+=dfs(adj,child,ans);
//         }

//         ans[node]=size;

//         return size;
//     }
// };