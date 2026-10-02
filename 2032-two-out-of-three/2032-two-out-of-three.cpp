class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]|=1;
        }

        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]|=2;
        }

        for(int i=0;i<nums3.size();i++){
            mp[nums3[i]]|=4;
        }

        vector<int>ans;

        for(auto it:mp){
            if(it.second==3 || it.second==5 || it.second==6 || it.second==7)
            ans.push_back(it.first);
        }

        return ans;

        
    }
};