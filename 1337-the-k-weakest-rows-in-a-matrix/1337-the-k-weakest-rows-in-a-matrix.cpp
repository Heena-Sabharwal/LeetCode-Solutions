class Solution {
public:
    vector<int>kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>> pq;

        for(int i=0;i<mat.size();i++){
            int num=0;

            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]!=1)
                    break;
                num++;
            }

            pq.push({num,i});
            if(pq.size()>k)
                pq.pop();
        }

        vector<int>ans;
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};