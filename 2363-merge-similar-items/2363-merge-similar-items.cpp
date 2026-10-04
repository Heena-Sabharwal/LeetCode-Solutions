class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> res;

        unordered_map<int,int>mp;

        for(auto p:items1){
            mp[p[0]]+=p[1];
        }
        for(auto p:items2){
            mp[p[0]]+=p[1];
        }

        for(auto it:mp){
            res.push_back({it.first,it.second});
        }

        sort(res.begin(),res.end());

        return res;


    }
};