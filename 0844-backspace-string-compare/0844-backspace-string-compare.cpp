class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ss="",tt="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='#')
                ss+=s[i];
            else{
                if(!ss.empty())
                ss.pop_back();
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#')
                tt+=t[i];
            else
            {   if(!tt.empty())
                tt.pop_back();
            }
        }
        if(ss==tt)
            return true;
        return false;
    }
};