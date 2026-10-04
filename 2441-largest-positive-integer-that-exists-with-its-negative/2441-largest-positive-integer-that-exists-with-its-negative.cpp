class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>st;

        for(auto num:nums){
            if(num<0)
                st.insert(num);
        }

        int res=-1;

        for(auto num:nums){
            if(num>0 && st.count(-num)){
                if(num>res)
                    res=num;
                
            }
        }
        return res;
    }
};