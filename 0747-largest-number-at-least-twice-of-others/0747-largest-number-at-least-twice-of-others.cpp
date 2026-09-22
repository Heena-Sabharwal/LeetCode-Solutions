class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int l=nums[0], sl=0;
        int index=0;

        for(int i=1;i<nums.size();i++){
            if(nums[i]>=l){
                index=i;
                sl=l;
                l=nums[i];
            }
            else if(nums[i]>=sl)
                sl=nums[i];
        }

        if(l>=2*sl)
            return index;
        return -1;
    }
};