class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<unordered_map<char,int>>store;
        vector<vector<string>>res;

        unordered_map<char,int>mp;

        for(string temp:strs){
            for(char c:temp){
                mp[c]++;
            }

            bool found=false;

            for(int i=0;i<store.size();i++){
                if(store[i]==mp){
                    res[i].push_back(temp);
                    found=true;
                    break;
                }
            }
            if(!found){
                res.push_back({temp});
                store.push_back(mp);
            }
            mp.clear();
        }

        return res;
    }
};