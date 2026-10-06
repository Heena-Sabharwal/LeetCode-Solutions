class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>current;
        backtrack(0,target,candidates,current,0);
        return res;
    }
    vector<vector<int>>res;
    void backtrack(int index, int target, vector<int>&candidates, vector<int>current,int sum){
        if(index==candidates.size()){
            if(sum==target)
                res.push_back(current);
                return;
        }
        if(sum==target){
            res.push_back(current);
            return;
        }
        
        if(sum>target)
            return;
        current.push_back(candidates[index]);
        backtrack(index, target,candidates, current,sum+candidates[index]);
        current.pop_back();
        backtrack(index+1,target,candidates,current,sum);

    }
};