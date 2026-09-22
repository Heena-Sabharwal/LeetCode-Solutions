class Solution {
public:
    string longestWord(vector<string>& words) {
        unordered_set<string> st(words.begin(), words.end());

    sort(words.begin(), words.end(),
    [](string &a, string &b) {

        if(a.size() == b.size())
            return a < b;

        return a.size() > b.size();
    });

    for(string word : words) {

        bool ok = true;

        string temp = "";

        for(int i = 0; i < word.size() - 1; i++) {

            temp += word[i];

            if(!st.count(temp)) {
                ok = false;
                break;
            }
        }

        if(ok)
            return word;
    }

    return "";


    }
};