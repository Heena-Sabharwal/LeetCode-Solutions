class Solution {
public:
    string reverseWords(string s) {
        int lw=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(s.begin()+lw+1, s.begin()+i);
                lw=i;
            }
            if(i==s.size()-1){
                reverse(s.begin()+lw+1, s.begin()+i+1);
            }
        }
        return s;
    }
};