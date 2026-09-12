class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int max_count;
        for(auto it:mp){
            if (it.second >(nums.size()/2)){
                max_count=it.first;
                break;
            }
        }
        return max_count;
    }
};