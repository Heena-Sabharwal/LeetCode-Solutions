class Solution {
public:
    bool buddyStrings(string s, string goal) {

        if (s.size() != goal.size())
            return false;

        vector<int> sw;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                sw.push_back(i);

                if (sw.size() > 2)
                    return false;
            }
        }

        if (sw.size() == 0) {

            vector<int> freq(26, 0);

            for (char c : s) {
                freq[c - 'a']++;

                if (freq[c - 'a'] > 1)
                    return true;
            }

            return false;
        }

        if (sw.size() != 2)
            return false;

        swap(s[sw[0]], s[sw[1]]);

        return s == goal;
    }
};