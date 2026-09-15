class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        unordered_map<string,char>rev;
        vector<string>v;

        string st="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                v.push_back(st);
                st="";
            }
            else{
                st+=s[i];
            }
        }

        v.push_back(st);

        if(pattern.size()!=v.size())
            return false;

        for(int i=0;i<pattern.size();i++){
            char ch = pattern[i];
            string word = v[i];

            if(mp.count(ch) && mp[ch] != word)
                return false;

            if(rev.count(word) && rev[word] != ch)
                return false;

            mp[ch] = word;
            rev[word] = ch;
        }

        return true;
        
    }
};