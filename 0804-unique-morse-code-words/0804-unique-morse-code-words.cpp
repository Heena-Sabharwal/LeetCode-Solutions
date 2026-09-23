class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.."
        };

        unordered_map<char, string> mp;

        for (int i = 0; i < 26; i++) {
            mp['a' + i] = morse[i];
        }

        unordered_set<string>mrc;

        for(auto word:words){
            string s="";
            for(char c:word){
                s+=mp[c];
            }
            mrc.insert(s);
        }
        return mrc.size();
    }
};