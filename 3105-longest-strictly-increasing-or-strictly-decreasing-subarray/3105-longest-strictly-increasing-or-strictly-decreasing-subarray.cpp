class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res=1;
        int max_res=res;
        int id=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                if(id==1){
                    res++;
                }
                else{
                    id=1;
                    res=2;
                }
            }
            else if(nums[i]<nums[i-1]){
                if(id==2){
                    res++;
                }
                else{
                    id=2;
                    res=2;
                }
            }
            else{
                id=0;
                res=1;
            }
            max_res=max(res,max_res);
        }
        return max_res;
    }
};