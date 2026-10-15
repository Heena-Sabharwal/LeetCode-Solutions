class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //Higher time complexity here
        // int n = nums.size();

        // if (n == 0)
        //     return;

        // k %= n;

        // for (int i = 0; i < k; i++) {
        //     int num = nums.back();
        //     nums.pop_back();
        //     nums.insert(nums.begin(), num);
        // }

        //Optimal approach
        int n = nums.size();
        if (n == 0) return;

        k %= n;

        reverse(nums.begin(), nums.end());

        int i = 0, j = k - 1;
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }

        i = k;
        j = n - 1;
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};