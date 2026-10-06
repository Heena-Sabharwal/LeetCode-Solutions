class Solution {
public:
    bool isGood(vector<int>& nums) {

        int n=*max_element(nums.begin(),nums.end());

        unordered_map<int,int>mp;

        for(auto num:nums){
            mp[num]++;
        }
        if(mp.size()!=n)
            return false;
            
        for(int i=1;i<n;i++){
            if(!mp.count(i))
                return false;
            if(mp[i]!=1)
                return false;
        }

        if(mp[n]==2)
            return true;

        return false;
    }
};