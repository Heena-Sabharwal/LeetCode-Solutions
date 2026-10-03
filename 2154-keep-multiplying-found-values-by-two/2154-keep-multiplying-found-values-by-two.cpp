class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int>st;

        for(auto num:nums)
            st.insert(num);

        while(1){
            if(st.count(original)){
                original*=2;
            }
            else
                break;
        }
        return original;
    }
};