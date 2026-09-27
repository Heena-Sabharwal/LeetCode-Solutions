class Solution {
public:
    string reformat(string s) {
        int alpha=0,nums=0;

        for(int i=0;i<s.size();i++){
            if(isalpha(s[i]))
                alpha++;
            else
                nums++;
        }

        if(s.size()%2==0 && alpha!=nums)
            return "";
        
        if(abs(alpha-nums)>1)
            return "";
        
        string res=s;

        int i=0,j=1;
        if(nums>alpha){
            i=1;
            j=0;
        }

        for(char c:s){
            if(isalpha(c)){
                res[i]=c;
                i+=2;
            }
            else{
                res[j]=c;
                j+=2;
            }
        }
        return res;


    }
};