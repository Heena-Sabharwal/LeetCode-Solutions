class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;

        for(auto word:words){
            mp[word]++;
        }

        auto cmp = [](pair<int,string> a, pair<int,string> b) {
        if (a.first != b.first) return a.first > b.first;
        return a.second < b.second;
        };

        priority_queue<pair<int,string>, vector<pair<int,string>>, decltype(cmp)> pq(cmp);

        for(auto &it:mp){
            pq.push({it.second, it.first});

            if(pq.size()>k)
            pq.pop();
        }

        vector<string>res;

        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }

        reverse(res.begin(),res.end());
        return res;



    }
};