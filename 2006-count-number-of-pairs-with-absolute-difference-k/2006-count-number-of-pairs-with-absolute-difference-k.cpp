class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int res = 0;

        for(auto num : nums) {
            res += mp[num - k];
            res += mp[num + k];

            mp[num]++;
        }

        return res;
    }
};