class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>res;

        for(auto c:s){
            res.insert(c);
        }

        return res.size();
    }
};