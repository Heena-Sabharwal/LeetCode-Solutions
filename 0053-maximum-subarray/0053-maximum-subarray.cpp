class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int bestmax=0;
        int maxuptoi=0;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxuptoi+=nums[i];
            if(maxuptoi<0)
                maxuptoi=0;
            if(maxuptoi>bestmax)
                bestmax=maxuptoi;
            if(nums[i]>max)
                max=nums[i];
        }
        if(max<=0){
            return max;
        }
        return bestmax;
    }
};