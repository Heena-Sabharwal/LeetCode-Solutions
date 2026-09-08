class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
            return strs[0];
        string ans="";
        sort(strs.begin(),strs.end());
        string zero=strs[0];
        string one=strs[strs.size()-1];
        for(int i=0;i<zero.size()&& i<one.size();i++){
            if(zero[i]==one[i])
                ans+=zero[i];
            else
                break;
        }
        return ans;
        
    }
};