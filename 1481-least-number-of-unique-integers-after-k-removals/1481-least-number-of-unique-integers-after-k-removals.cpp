class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;

        for(auto num:arr)
            mp[num]++;

        priority_queue<int,vector<int>, greater<int>>pq;

        for(auto it:mp){
            pq.push(it.second);
        }

        while(pq.top()<=k){
            k-=pq.top();
            pq.pop();
        }
        return pq.size();
    }
};