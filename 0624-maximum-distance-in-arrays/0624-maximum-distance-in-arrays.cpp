class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mini = arrays[0][0];
        int maxi = arrays[0].back();

        int ans = 0;

        for(int i = 1; i < arrays.size(); i++) {
            int currMin = arrays[i][0];
            int currMax = arrays[i].back();

            ans = max(ans, abs(currMax - mini));
            ans = max(ans, abs(maxi - currMin));

            mini = min(mini, currMin);
            maxi = max(maxi, currMax);
        }

        return ans;

        
    }
};
