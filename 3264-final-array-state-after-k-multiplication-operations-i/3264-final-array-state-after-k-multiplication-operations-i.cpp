class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>>pq;

        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }

        while(k){
            int x=pq.top().first*multiplier;
            int y=pq.top().second;
            pq.pop();
            pq.push({x,y});
            k--;
        }

        while(!pq.empty()){
            nums[pq.top().second]=pq.top().first;
            pq.pop();
        }
        return nums;
    }
};