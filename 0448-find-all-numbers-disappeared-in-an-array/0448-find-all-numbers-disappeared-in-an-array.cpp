class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]=1;
        // }
        // vector<int>ans;
        // for(int i=1;i<=nums.size();i++){
        //     if(mp.find(i)==mp.end())
        //         ans.push_back(i);
        // }
        // return ans;

        for(int i=0;i<nums.size();i++){
            int idx = abs(nums[i]) - 1;
            if (nums[idx] > 0)
            nums[idx] = -nums[idx];
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                ans.push_back(i+1);
        }
        return ans;
        
    }
};