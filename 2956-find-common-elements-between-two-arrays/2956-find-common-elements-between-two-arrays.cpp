class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;

        for(auto num:nums2)
            st.insert(num);

        int ans1=0;

        for(auto num:nums1){
            if(st.count(num))
                ans1++;
        }

        st.clear();
        
        for(auto num:nums1)
            st.insert(num);

        int ans2=0;

        for(auto num:nums2){
            if(st.count(num))
                ans2++;
        }

        return {ans1,ans2};

    }
};