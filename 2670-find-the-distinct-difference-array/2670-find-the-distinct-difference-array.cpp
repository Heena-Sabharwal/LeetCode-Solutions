class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_map<int,int>suffix;
        unordered_map<int,int>prefix;

        vector<int>res;

        for(auto num:nums){
            suffix[num]++;
        }

        for(int i=0;i<nums.size();i++){
            prefix[nums[i]]++;
            suffix[nums[i]]--;
            if(suffix[nums[i]]==0)
                suffix.erase(nums[i]);

            res.push_back(prefix.size()-suffix.size());
        }

        return res;    }
};