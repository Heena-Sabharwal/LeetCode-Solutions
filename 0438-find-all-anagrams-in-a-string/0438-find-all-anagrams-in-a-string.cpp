class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        if(p.size()>s.size())
            return {};
        unordered_map<char,int>mp;

        for(auto c:p)
            mp[c]++;

        unordered_map<char,int>temp;

        for(int i=0;i<p.size();i++){
            temp[s[i]]++;
        }
        vector<int>res;
        for(int i=0;i<=s.size()-p.size();i++){
            if(temp==mp)
                res.push_back(i);
            temp[s[i]]--;
            if(temp[s[i]]==0)
                temp.erase(s[i]);
            temp[s[i+p.size()]]++;
        }
        return res;
    }
};