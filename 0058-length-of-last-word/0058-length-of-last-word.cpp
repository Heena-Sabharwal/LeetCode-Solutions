class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=0, i=s.size()-1;
        bool encounter=false;

        while(i>=0){
            if(s[i]!=' ')
                break;
            i--;
        }
        while(i>=0){
            if(s[i]==' ')
                break;
            res++;
            i--;
        }
        return res;
    }
};