class Solution {
public:
    int binaryGap(int n) {
        int res=0;
        int one=-1;
        for(int i=0;i<31;i++){
            if(n&1){
                if(one!=-1)
                res=max(res,i-one);
                one=i;
            }
            n=n>>1;
        }
        return res;
    }
};