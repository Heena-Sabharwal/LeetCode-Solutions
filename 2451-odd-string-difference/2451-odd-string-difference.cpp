class Solution {
public:
    string oddString(vector<string>& words) {

    vector<vector<int>> v;

    for(auto word : words) {

        vector<int> temp;

        for(int i = 1; i < word.size(); i++) {
            temp.push_back(word[i] - word[i - 1]);
        }

        v.push_back(temp);
    }

    map<vector<int>, int> mp;

    for(auto row : v)
        mp[row]++;

    for(int i = 0; i < v.size(); i++) {

        if(mp[v[i]] == 1) {
            return words[i];
        }
    }

    return "";
}
};