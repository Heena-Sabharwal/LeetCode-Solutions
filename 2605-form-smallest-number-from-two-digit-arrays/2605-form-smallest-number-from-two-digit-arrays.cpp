class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>freq;

        for(auto num:nums1){
            freq[num]++;
        }

        for(auto num:nums2){
            freq[num]++;
        }
        int res=10;
        for(auto it:freq){
            if(it.second==2){
                res=min(res,it.first);
            }
        }
        if(res!=10)
            return res;

        int s1=INT_MAX,s2=INT_MAX;

        for(auto num:nums1){
            s1=min(s1,num);
        }

        for(auto num:nums2){
            s2=min(s2,num);
        }

        if(s1==s2)
            return s1;
        

        int big=max(s1,s2);
        int small=min(s1,s2);

        return (small*10)+big;
    }
};