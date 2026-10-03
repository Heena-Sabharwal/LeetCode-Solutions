class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;

        for(auto str:arr){
            mp[str]++;
        }
        for(auto it = mp.begin(); it != mp.end(); ) {
            if(it->second != 1)
                it = mp.erase(it);
            else
                ++it;
        }
        vector<string>res;
        for(auto str:arr){
            if(mp.count(str)){
                res.push_back(str);
                mp.erase(str);
            }
        }
        if(res.size()<k)
            return "";
        return res[k-1];
    }
};