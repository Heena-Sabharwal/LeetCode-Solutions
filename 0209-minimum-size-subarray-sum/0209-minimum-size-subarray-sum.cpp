class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int sum = 0;
        int start = 0;
        int res = INT_MAX;

        for (int end = 0; end < nums.size(); end++) {
            sum += nums[end];

            while (sum >= target) {
                res = min(res, end - start + 1);
                sum -= nums[start];
                start++;
            }
        }

        return res == INT_MAX ? 0 : res;
        // int sum=0;
        // int start_index=0;
        // int res=0;
        // int j=0;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(sum>=target){
        //         j=i+1;
        //         res=i+1;
        //         break;
        //     }
        // }
        // if(sum<target)
        //     return 0;
        
        // int len=res;
        // while(j<nums.size()){
        //     while(sum>=target){
        //         res=min(res,len);
        //         sum-=nums[start_index];
        //         start_index++;
        //         len--;
        //     }
        //     while(sum<target && j<nums.size()){
        //         sum+=nums[j];
        //         j++;
        //         len++;
        //     }
        // }

        // return res;
    }
};