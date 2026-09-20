class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans;
        int max_sum=0;
        for(int i=0;i<k;i++)
            max_sum+=nums[i];
        int lastsum=max_sum;
        int new_sum;
        for(int i=1;i+k<=nums.size();i++){
            new_sum= lastsum-nums[i-1]+nums[i+k-1];
            lastsum=new_sum;
            if(new_sum>max_sum)
                max_sum=new_sum;
        }
        double sum=max_sum;
        ans=sum/k;
        return ans;
    }
};