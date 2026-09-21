class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int num:nums)
            mp[num]++;
        
        int degree=0;

        for(auto it:mp){
            if(it.second>degree)
                degree=it.second;
        }
        vector<int>res;
        for(auto it:mp){
            if(it.second==degree)
                res.push_back(it.first);
        }

        int ans = nums.size();

        for(int x : res) {

            int first = -1;
            int last = -1;

            for(int i = 0; i < nums.size(); i++) {

                if(nums[i] == x) {

                    if(first == -1)
                        first = i;

                    last = i;
                }
            }

            ans = min(ans, last - first + 1);
        }

        return ans;
        
    }
};