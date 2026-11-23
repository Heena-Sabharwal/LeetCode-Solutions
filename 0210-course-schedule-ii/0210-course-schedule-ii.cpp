class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);

        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }

        queue<int>q;

        for(int i=0;i<numCourses;i++){
            if(!indegree[i]){
                q.push(i);
            }
        }

        vector<int>topo;

        while(!q.empty()){
            int node=q.front();
            for(int neighbor:adj[node]){
                indegree[neighbor]--;
                if(indegree[neighbor]==0)
                    q.push(neighbor);
            }
            topo.push_back(node);
            q.pop();
        }
        if(topo.size()!=numCourses)
            return {};
        return topo;
    }
};