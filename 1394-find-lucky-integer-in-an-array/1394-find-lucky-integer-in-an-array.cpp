class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;

        for(auto num:arr)
            freq[num]++;
        
        int res=0;

        for(auto it:freq){
            if(it.first==it.second && it.first>res){
                res=it.first;
            }
        }
        if(res)
            return res;
        return -1;
    }
};