class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;

        for(auto num:arr)
            mp[num]++;

        unordered_set<int>uo;

        for(auto it:mp){
            if(uo.count(it.second))
                return false;
            uo.insert(it.second);
        }
        return true;
    }
};