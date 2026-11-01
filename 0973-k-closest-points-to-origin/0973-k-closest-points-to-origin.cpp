class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;

        for(int i=0;i<points.size();i++){
            int sum=pow(points[i][0],2)+pow(points[i][1],2);
            pq.push({sum,i});
            if(pq.size()>k)
                pq.pop();
        }

        vector<vector<int>>res;

        auto it=pq;

        while(!it.empty()){
            res.push_back(points[it.top().second]);
            it.pop();
        }

        return res;
    }
};