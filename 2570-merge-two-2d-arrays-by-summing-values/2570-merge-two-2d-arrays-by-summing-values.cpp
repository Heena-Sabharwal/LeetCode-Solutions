class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int>mp;
        set<int>ids;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i][0]]+=nums1[i][1];
            ids.insert(nums1[i][0]);
        }

        for(int i=0;i<nums2.size();i++){
            if(mp.count(nums2[i][0])){
                mp[nums2[i][0]]+=nums2[i][1];
            }
            else{
                mp[nums2[i][0]]=nums2[i][1];
                ids.insert(nums2[i][0]);
            }
        }
        vector<vector<int>>v;
        for(auto id:ids){
            v.push_back({id,mp[id]});
        }
        return v;


    }
};