class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans{0,0};

        ans[0]=binary_Search(nums,target,0,nums.size()-1);
        ans[1]=binary_Search_h(nums,target,0,nums.size()-1);

        return ans;
    }
    int binary_Search(vector<int>& nums, int target, int low, int high){
        if(low>high)
            return -1;
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            if(mid==0 || nums[mid-1]!=target)
                return mid;
            return binary_Search(nums,target,low,mid-1);
        }
        if(nums[mid]<target)
            return binary_Search(nums,target,mid+1,high);
        else
            return binary_Search(nums,target,low,mid-1);        
    
    }

    int binary_Search_h(vector<int>& nums, int target, int low, int high){
        if(low>high)
            return -1;
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            if(mid==nums.size()-1 || nums[mid+1]!=target)
                return mid;
            return binary_Search_h(nums,target,mid+1,high);
        }
        if(nums[mid]<target)
            return binary_Search_h(nums,target,mid+1,high);
        else
            return binary_Search_h(nums,target,low,mid-1);        
    
    }
};