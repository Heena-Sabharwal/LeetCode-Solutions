class Solution {
public:
    string reverseOnlyLetters(string s) {
        string res="";

        for(auto c:s){
            if(isalpha(c))
                res+=" ";
            else
                res+=c;
        }
        int j=0;
        for(int i=s.size()-1;i>=0;i--){
            if(isalpha(s[i])){
                while(res[j]!=' ')
                    j++;
                res[j]=s[i];
                j++;
            }
        }
        return res;
    }
};