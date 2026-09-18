class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        int thd=0;
        for(int i=0;i<31;i++){
            int nofo=0;
            for(int j=0;j<n;j++){
                if(nums[j]&1)
                    nofo++;
                nums[j]=nums[j]>>1;
            }
            int mul=nofo*(n-nofo);
            thd+=mul;
        }

        return thd;
    }
};