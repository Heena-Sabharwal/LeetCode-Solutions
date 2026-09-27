class Solution {
public:
    int maxPower(string s) {
        int res=1,count=1;

        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])
                count++;
            else{
                res=max(res,count);
                count=1;
            }
        }
        res=max(res,count);

        return res;
    }
};