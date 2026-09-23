class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        unordered_set<int>st;

        for(int i=0;i<s.size();i++){
            if(s[i]==c)
                st.insert(i);
        }

        vector<int>v;

        for(int i=0;i<s.size();i++){
            int dis=INT_MAX;
            for(auto d:st){
                dis=min(dis,abs(d-i));
            }
            v.push_back(dis);
        }
        return v;
    }
};