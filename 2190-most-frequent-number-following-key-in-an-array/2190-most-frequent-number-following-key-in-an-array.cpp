class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                mp[nums[i+1]]++;
            }
        }
        int count=0;
        int target=0;

        for(auto it:mp){
            if(it.second>count){
                count=it.second;
                target=it.first;
            }
        }
        return target;

    }
};