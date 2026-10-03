class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st1;
        unordered_set<int>st2;

        for(auto num:nums1)
            st1.insert(num);
        for(auto num:nums2)
            st2.insert(num);

        vector<vector<int>>v;

        vector<int>temp;

        for(auto it:st1){
            if(!st2.count(it))
                temp.push_back(it);
        }
        v.push_back(temp);
        temp.clear();
        for(auto it:st2){
            if(!st1.count(it))
                temp.push_back(it);
        }
        v.push_back(temp);

        return v;
    }
};