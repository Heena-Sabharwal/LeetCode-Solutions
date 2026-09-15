class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1)
        return;

        int t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]){
                nums[t]=nums[i];
                t++;
            }
        }
        for(int i=t;i<nums.size();i++){
            nums[i]=0;
        }
    }
};