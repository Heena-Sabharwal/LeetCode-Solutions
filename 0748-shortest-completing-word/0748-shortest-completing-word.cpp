class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int> need;

    for(char c : licensePlate) {

        c = tolower(c);

        if(c >= 'a' && c <= 'z')
            need[c]++;
    }

    string ans = "";

    for(string word : words) {

        unordered_map<char,int> freq;

        for(char c : word)
            freq[c]++;

        bool ok = true;

        for(auto it : need) {

            if(freq[it.first] < it.second) {
                ok = false;
                break;
            }
        }

        if(ok) {

            if(ans == "" || word.size() < ans.size())
                ans = word;
        }
    }

    return ans;

    }
};