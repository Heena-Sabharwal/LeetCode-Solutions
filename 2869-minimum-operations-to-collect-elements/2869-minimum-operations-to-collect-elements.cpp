class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        unordered_set<int>st;
        int res=0;

        for(int i=nums.size()-1;i>=0;i--){
            res++;
            if(nums[i]<=k){
                st.insert(nums[i]);
            }
            if(st.size()==k)
                break;  
        }
        return res;
    }
};