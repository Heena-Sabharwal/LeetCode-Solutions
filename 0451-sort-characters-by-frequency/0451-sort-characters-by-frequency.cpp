class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;

        for(char c:s){
            mp[c]++;
        }

        priority_queue<pair<int,char>>pq;

        for(auto it:mp){
            pq.push({it.second,it.first});
        } 

        string fs="";

        while(!pq.empty()){
            char i=pq.top().second;

            while(mp[i]){
                fs+=i;
                mp[i]--;
            }
            pq.pop();

        }

        return fs;
    }
};