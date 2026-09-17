class Solution {
public:
    int longestPalindrome(string s) {
        sort(s.begin(),s.end());
        int lp=0;
        int one=0;
        for(int i=0;i<s.size();){
            if(s[i]==s[i+1]){
                lp+=2;
                i=i+2;
            }
            else{
                one=1;
                i++;
            }
        }
        if(one){
            lp+=one;
        }
        return lp;
    }
};