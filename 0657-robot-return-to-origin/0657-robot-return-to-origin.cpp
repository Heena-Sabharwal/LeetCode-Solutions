class Solution {
public:
    bool judgeCircle(string moves) {
        int l=0,r=0,u=0,d=0;

        for(auto c:moves){
            if(c=='L')
                l++;
            if(c=='U')
                u++;
            if(c=='D')
                d++;
            if(c=='R')
                r++;
        }

        if(l==r && d==u)
            return true;
        return false;
    }
};