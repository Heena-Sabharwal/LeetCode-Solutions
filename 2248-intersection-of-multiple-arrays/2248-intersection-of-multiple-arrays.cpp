class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_set<int>st;
        for(auto num:nums[0]){
            st.insert(num);
        }
        
        unordered_set<int>temp;
        for(int i=1;i<nums.size();i++){
            for(auto num:nums[i]){
                if(st.count(num)){
                    temp.insert(num);
                }
            }
            st=temp;
            temp.clear();
        }
        vector<int>res;
        for(auto num:st){
            res.push_back(num);
        }
        sort(res.begin(),res.end());
        return res;
    }
};