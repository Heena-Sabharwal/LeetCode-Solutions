class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int>st;

        for(auto num:nums){
            st.insert(num);
        }

        int sum=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]+1)
                break;
            sum+=nums[i];
        }

        for(int i=sum;;i++){
            if(!st.count(i))
                return i;
        }

        return 0;
    }
};