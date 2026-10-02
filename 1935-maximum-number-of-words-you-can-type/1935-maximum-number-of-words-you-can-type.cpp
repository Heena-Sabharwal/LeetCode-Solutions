class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>bl;

        for(auto c:brokenLetters){
            bl.insert(c);
        }
        int res = 0;
        bool ok = true;

        for(int i = 0; i < text.size(); i++) {

            if(bl.count(text[i]))
                ok = false;

            if(text[i] == ' ') {
                if(ok)
                    res++;

                ok = true;
            }
        }

        if(ok)
            res++;

        return res;
    }
};