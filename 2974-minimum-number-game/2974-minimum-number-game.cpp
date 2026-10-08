class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>>pq;

        for(auto num:nums){
            pq.push(num);
        }

        vector<int>res;
        while(!pq.empty()){
            int x=pq.top();
            pq.pop();
            res.push_back(pq.top());
            res.push_back(x);
            pq.pop();
        }
        return res;
    }
};