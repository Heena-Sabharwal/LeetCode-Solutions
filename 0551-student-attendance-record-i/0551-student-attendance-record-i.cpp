class Solution {
public:
    bool checkRecord(string s) {
        int a=0,l=0;
        bool late=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                a++;
                if(l<3)
                    l=0;
            }
            else if(s[i]=='L'){
                l++;
            }
            else{
                if(l<3)
                    l=0;
            }
        }
        if(a>=2 || l>=3)
            return false;
        return true;
    }
};