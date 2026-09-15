class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;

        int nofo=0;
        int place=0;
        for(int i=0;i<31;i++){
            if(n&1){
                nofo++;
                place=i;
            }
            n=n>>1;
        }
        if(nofo>1)
            return false;
        if(place%2==0)
            return true;
        
        return false;
    }
};