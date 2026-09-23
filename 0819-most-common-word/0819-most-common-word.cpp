class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_set<string> ban;
        for(auto str:banned){
            ban.insert(str);
        }
        unordered_map<string,int>mp;

        string res = "";

        for(char c : paragraph) {
            c = tolower(c);
            if(c >= 'a' && c <= 'z') {
                res += c;
            }
            else {

                if(res != "" && !ban.count(res)) {
                    mp[res]++;
                }
                res="";
            }
        }

        if(res != "" && !ban.count(res))
            mp[res]++;

        priority_queue<pair<int,string>>pq;

        for( auto it:mp){
            pq.push({it.second,it.first});
        }
        return pq.top().second;


    }
};