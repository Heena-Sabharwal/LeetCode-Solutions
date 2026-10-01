struct cmp {

    bool operator()(pair<int,int> a,
                    pair<int,int> b) {

        if(a.first == b.first) {
            return a.second < b.second;
        }

        return a.first > b.first;
    }
};

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(auto num:nums){
            mp[num]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;

        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        vector<int>res;
        while(pq.size()){
            pair<int,int>p=pq.top();
            while(p.first){
                res.push_back(p.second);
                p.first--;
            }
            pq.pop();
        }
        return res;


    }
};