class Solution {
public:
    bool isFascinating(int n) {
        string num=to_string(n);

        num+=to_string(n*2);
        num+=to_string(n*3);

        unordered_map<char,int>mp;

        for(auto c:num){
            mp[c]++;
        }

        for(auto it:mp){
            if(it.first=='0')
                return false;
            if(it.second>1)
                return false;
        }
        return true;
    }
};