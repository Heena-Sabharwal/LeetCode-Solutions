class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set <int> times;

        for(auto num:nums){
            if(times.count(num))
                return num;
            times.insert(num);
        }
        return 0;
    }
};