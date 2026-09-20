class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int neg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)
                neg++;
            else
                break;
        }
        int n=nums.size();
        if(neg<=1){
            return nums[n-1]*nums[n-2]*nums[n-3];
        }
        else{
            return max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1] );
        }
    }
};