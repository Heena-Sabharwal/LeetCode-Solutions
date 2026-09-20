class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    int xor_all = 0;

    // Step 1: XOR all nums and 1..n
    for (int i = 0; i < n; i++) {
        xor_all ^= nums[i];
        xor_all ^= (i + 1);
    }

    // Step 2: get rightmost set bit
    int set_bit = xor_all & (-xor_all);

    int x = 0, y = 0;

    // Step 3: divide into two groups
    for (int i = 0; i < n; i++) {
        if (nums[i] & set_bit)
            x ^= nums[i];
        else
            y ^= nums[i];

        if ((i + 1) & set_bit)
            x ^= (i + 1);
        else
            y ^= (i + 1);
    }

    // Step 4: determine which is duplicate
    for (int num : nums) {
        if (num == x)
            return {x, y}; // x is duplicate
    }

    return {y, x}; // y is duplicate
}
};