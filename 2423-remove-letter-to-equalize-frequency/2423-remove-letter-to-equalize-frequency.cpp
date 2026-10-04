class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int> mp;

        for(char c : word)
            mp[c]++;

        for(char c : word) {

            mp[c]--;

            unordered_set<int> st;

            for(auto it : mp) {

                if(it.second > 0)
                    st.insert(it.second);
            }

            if(st.size() == 1)
                return true;

            mp[c]++;
        }

        return false;
    }
};