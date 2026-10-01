class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int>mp;

        for(auto c:s){
            mp[c]++;
        }
        vector<char>count;

        for(auto it:mp){
            if(it.second>1)
                count.push_back(it.first);
        }

        int res=-1;
        for(auto c:count){
            int first=-1;
            int last=-1;

            for(int i=0;i<s.size();i++){
                if(s[i]==c){
                    last=i;
                    if(first==-1)
                        first=i;
                }
            }

            res=max(res,last-first-1);

        }

        return res;

    }
};