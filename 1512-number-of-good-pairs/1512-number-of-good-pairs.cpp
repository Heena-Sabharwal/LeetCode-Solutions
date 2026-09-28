class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(auto num:nums){
            mp[num]++;
        }
        int res=0;

        for(auto it:mp){
            if(it.second>1){
                res+=((it.second)*(it.second-1))/2;
            }
        }
        return res;
    }
};