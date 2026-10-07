class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int res=0;

        for(int i = 0; i < nums.size(); i++) {

        int ones = 0;
        int n = i;

        while(n) {
            if(n & 1)
                ones++;

            n = n >> 1;
        }

        if(ones == k)
            res += nums[i];
        }
        return res;
    }
};