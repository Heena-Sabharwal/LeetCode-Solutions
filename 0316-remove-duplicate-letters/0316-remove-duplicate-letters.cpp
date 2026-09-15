class Solution {
public:
    string removeDuplicateLetters(string s) {

        unordered_map<char,int> mp;

        for(char c : s)
            mp[c]++;

        stack<char> st;
        unordered_set<char> chars;

        for(char c : s) {
            mp[c]--;

            if(chars.count(c))
                continue;

            while(!st.empty() &&
                st.top() > c &&
                mp[st.top()] > 0) {

                chars.erase(st.top());
                st.pop();
            }

            st.push(c);
            chars.insert(c);
        }

        string res;

        while(!st.empty()) {
            res += st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};