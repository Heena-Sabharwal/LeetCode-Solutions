class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() - 1;
        int ans = 0;

        for (int bit = 0; bit < 32; bit++) {
            int countArray = 0;
            int countRange = 0;

            for (int num : nums) {
                if (num & (1 << bit)) {
                    countArray++;
                }
            }

            for (int i = 1; i <= n; i++) {
                if (i & (1 << bit)) {
                    countRange++;
                }
            }

            if (countArray > countRange) {
                ans |= (1 << bit);
            }
        }

        return ans;
    }
};