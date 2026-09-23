class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;

        string res="";
        for(char c:s1){
            if(c!=' ')
                res+=c;
            else{
                mp[res]++;
                res="";
            }
        }
        mp[res]++;

        vector<string>result;
        res="";
        for(char c:s2){
            if(c!=' ')
                res+=c;
            else{
                mp[res]++;
                res="";
            }
        }
        mp[res]++;

        for(auto it:mp){
            if(it.second==1)
                result.push_back(it.first);
        }
        return result;
    }
};