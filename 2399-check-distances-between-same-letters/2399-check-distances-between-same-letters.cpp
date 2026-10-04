class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char,int>mp;

        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                int x=mp[s[i]];
                mp[s[i]]=i-x-1;
            }
            else{
                mp[s[i]]=i;
            }
        }

        for(auto it:mp){
            int n=it.first;
            n-=97;
            if(it.second!=distance[n])
                return false;
        }
        return true;
    }
};