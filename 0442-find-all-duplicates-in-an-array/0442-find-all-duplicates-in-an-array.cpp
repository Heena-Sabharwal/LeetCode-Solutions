class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<bool> visited(nums.size(), false);

        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(visited[nums[i]])
                res.push_back(nums[i]);
            else
                visited[nums[i]]=true;

        }
        return res;
    }
};