class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        if(nums.size()==1){
            if(nums[0]==0)
                return 0;
            return 1;
        }
        sort(nums.begin(),nums.end());
        int total_it=0;
        
        if(nums[0]!=0)
        total_it=1;

        for(int i=1;i<nums.size();i++){
            if( nums[i]!=nums[i-1])
                total_it++;   
        }
        
        return total_it;

    }
};