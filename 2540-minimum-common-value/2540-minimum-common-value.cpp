class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;

        for(auto num:nums1)
        st.insert(num);

        unordered_set<int>stt;
        for(auto num:nums2){
            if(st.count(num))
                stt.insert(num);
        }

        int res=INT_MAX;

        for(auto num:stt){
            if(num<res)
                res=num;
        }
        if(res!=INT_MAX)
        return res;

        return -1;
    }
};