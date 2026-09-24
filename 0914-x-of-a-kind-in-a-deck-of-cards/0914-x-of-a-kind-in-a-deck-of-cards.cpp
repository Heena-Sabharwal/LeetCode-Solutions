class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
        unordered_map<int,int>mp;

        for(auto i:deck)
            mp[i]++;

        int g=0;

        for(auto it:mp){
            g=gcd(g,it.second);
        }
        if(g==1)
            return false;
        return true;

    }
};