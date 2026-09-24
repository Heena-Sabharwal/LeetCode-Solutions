class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> common;

        for(char c : words[0]) {
            common[c]++;
        }

        for(int i = 1; i < words.size(); i++) {

            unordered_map<char,int> freq;

            for(char c : words[i]) {
                freq[c]++;
            }

            for(auto &it : common) {
                it.second = min(it.second, freq[it.first]);
            }
        }

        vector<string> ans;

        for(auto it : common) {

            while(it.second--) {

                string s(1, it.first);
                ans.push_back(s);
            }
        }

        return ans;
    }
};