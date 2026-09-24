class Solution {
public:
    vector<int> diStringMatch(string s) {
        int min=0, max=s.size();
        vector<int>ans;
        for(int i=0;i<=s.size();i++){
            if(s[i]=='I'){
                ans.push_back(min);
                min++;
            }
            if(s[i]=='D'){
                ans.push_back(max);
                max--;
            }
        }
        ans.push_back(min);
        return ans;
    }
};