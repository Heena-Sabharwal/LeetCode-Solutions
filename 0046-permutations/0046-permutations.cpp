class Solution {
    vector<vector<int>>res;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>visited(nums.size(),false);
        vector<int>temp;

        solve(visited,nums,temp);

        return res;
    }

    void solve(vector<bool> &visited, vector<int>&nums, vector<int>&temp){
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }

        int i;
        for(i=0;i<visited.size();i++){
            if(visited[i]==false){
            temp.push_back(nums[i]);
            visited[i]=true;

            solve(visited,nums,temp);

            temp.pop_back();
            visited[i]=false;
            }
        }
        
    }
};