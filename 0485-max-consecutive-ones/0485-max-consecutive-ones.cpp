class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes=0, currOnes=0;
        if(nums[0]==1)
            currOnes=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1] && nums[i]==1)
                currOnes++;
            if(nums[i]!=nums[i-1]){
                if(nums[i]==0){
                maxOnes=max(maxOnes,currOnes);
                currOnes=0;
                }
                else{
                    currOnes=1;
                }
            }
            
        }
        maxOnes=max(currOnes,maxOnes);
        return maxOnes;
    }
};