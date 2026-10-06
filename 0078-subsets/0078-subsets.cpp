class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>current;
        backtrack(0,nums.size(),nums,current);
        return res;
    }
    vector<vector<int>>res;
    void backtrack(int index, int n, vector<int>& nums, vector<int>current){
        if(index==n){
            res.push_back(current);
            return;
        }
        current.push_back(nums[index]);
        backtrack(index+1,n,nums,current);

        current.pop_back();
        backtrack(index+1,n,nums,current);
    }
};