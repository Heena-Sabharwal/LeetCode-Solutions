class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_set<int>res;

        for(auto p:nums){
            for(int i=p[0];i<=p[1];i++)
                res.insert(i);
        }

        return res.size();
    }
};