class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        unordered_map<char,int>temp;
        for(char c:target){
            temp[c]++;
        }

        int res=0;

        while(1){
            bool add=true;
            for(auto it:temp){
                if(mp.count(it.first) && mp[it.first]>=it.second){
                    mp[it.first]-=it.second;
                }
                else
                    add=false;
            }
            if(add)
                res++;
            else   
                break;
        }
        return res;
    }
};