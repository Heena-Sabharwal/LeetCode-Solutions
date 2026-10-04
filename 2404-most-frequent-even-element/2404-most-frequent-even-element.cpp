class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        int maxx=INT_MAX;
        int max_count=0;

        for(auto it:mp){
            if(it.second>max_count){
                maxx=it.first;
                max_count=it.second;
            }
            else if(it.second==max_count){
                maxx=min(it.first,maxx);
            }
        }
        if(maxx==INT_MAX)
            return -1;
        return maxx;
    }
};