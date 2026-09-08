class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        int jumps = 0;        // number of jumps
        int curEnd = 0;       // farthest index reachable in 'jumps' jumps
        int maxReach = 0;     // farthest index reachable in 'jumps + 1' jumps

        for (int i = 0; i < n - 1; i++) {
            maxReach = max(maxReach, i + nums[i]);

            if (i == curEnd) {
                jumps++;
                curEnd = maxReach;
                if (curEnd >= n - 1) break;
            }
        }

        return jumps;
    }
};