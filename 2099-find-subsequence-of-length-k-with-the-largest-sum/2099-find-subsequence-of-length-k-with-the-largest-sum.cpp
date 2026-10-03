class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> v;

        for(int i = 0; i < nums.size(); i++){
            v.push_back({nums[i], i});
        }

        // Step 1: sort by value descending
        sort(v.begin(), v.end(), greater<>());

        // Step 2: take top k
        vector<pair<int,int>> temp(v.begin(), v.begin() + k);

        // Step 3: sort by index (to maintain order)
        sort(temp.begin(), temp.end(), [](auto &a, auto &b){
            return a.second < b.second;
        });

        // Step 4: extract values
        vector<int> ans;
        for(auto &it : temp){
            ans.push_back(it.first);
        }

        return ans;
    }
};