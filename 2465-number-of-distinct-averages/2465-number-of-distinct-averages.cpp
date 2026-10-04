class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double>avg;

        sort(nums.begin(),nums.end());

        int left=0, right=nums.size()-1;

        while(left<right){
            avg.insert((nums[left]+nums[right])/2.0);
            left++;
            right--;
        }
        return avg.size();
    }
};