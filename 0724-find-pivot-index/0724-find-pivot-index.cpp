class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }

        int new_sum=0;

        for(int i=0;i<nums.size();i++){
            if(i-1>=0)
            new_sum+=nums[i-1];
            sum-=nums[i];
            if(new_sum==sum)
                return i;
        }
        return -1;
    }
};