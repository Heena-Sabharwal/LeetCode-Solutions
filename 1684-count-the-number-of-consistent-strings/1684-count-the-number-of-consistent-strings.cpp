class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> ac;

        for(auto c:allowed){
            ac.insert(c);
        }

        int res=0;
        for(auto word:words){
            bool allow=true;
            for(char c:word){
                if(!ac.count(c)){
                    allow=false;
                    break;
                }
            }
            if(allow)
                res++;
        }
        return res;
    }
};