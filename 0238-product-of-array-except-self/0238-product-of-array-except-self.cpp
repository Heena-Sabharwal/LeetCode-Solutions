class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix;
        vector<int>suffix(nums.size());
        int pro_prefix=1;
        for(int i=0;i<nums.size();i++){
            pro_prefix*=nums[i];
            prefix.push_back(pro_prefix);
        }
        int pro_suffix=1;
        for(int i=nums.size()-1;i>=0;i--){
            pro_suffix*=nums[i];
            suffix[i]=pro_suffix;
        }

        vector<int>res(nums.size(),1);

        for(int i=0;i<nums.size();i++){
            if(i>0){
                res[i]*=prefix[i-1];
            }
            if(i+1<nums.size()){
                res[i]*=suffix[i+1];
            }
        }

        return res;
    }
};