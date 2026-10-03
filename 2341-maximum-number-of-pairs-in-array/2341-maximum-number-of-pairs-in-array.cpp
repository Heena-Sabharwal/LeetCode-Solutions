class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto num : nums)
            mp[num]++;

        int pair = 0;
        int left = 0;

        for(auto it : mp) {

            pair += it.second / 2;

            left += it.second % 2;
        }

        return {pair, left};
    }
};