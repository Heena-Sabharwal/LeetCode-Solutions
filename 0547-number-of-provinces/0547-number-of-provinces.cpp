class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool>visited(isConnected.size(),false);
        int cc=0;

        for(int i=0;i<isConnected.size();i++){
            if(!visited[i]){
                cc++;
                dfs(isConnected,visited,i);
            }
        }
        

        return cc;
    }

    void dfs(vector<vector<int>>& isConnected, vector<bool>&visited, int vertex){
        visited[vertex]=true;

        for(int i=0;i<isConnected.size();i++){
            if(!visited[i] && isConnected[vertex][i]){
                visited[i]=true;
                dfs(isConnected,visited,i);
            }
        }
    }
};