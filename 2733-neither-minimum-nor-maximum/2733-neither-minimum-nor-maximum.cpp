class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() < 3)
            return -1;

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        for (int x : nums) {
            if (x != mn && x != mx)
                return x;
        }

        return -1;
    }
};