class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans=0;

        for(int i=0;i<31;i++){
            int times=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]&1)
                    times++;
                nums[j]=nums[j]>>1;
            }
            if(times>=k)
                ans|=(1<<i);
        }

        return ans;
    }
};