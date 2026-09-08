class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int d=0;
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]==nums[i+1]){
                nums[i]=101;
                d++;
            }
        }
        int k=nums.size()-d;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=101){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return k;

    }
};