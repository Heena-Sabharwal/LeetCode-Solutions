class Solution {
public:
    bool hasAlternatingBits(int n) {
        int nofo=0;
        int num=n;
        for(int i=0;i<31;i++){
            if(num&1)
                nofo++;
            num=num>>1;
        }
        
        int prev_bit=2;
        int new_bit;
        for(int i=0;i<30;i++){
            if(!nofo)
                break;
            new_bit=n&1;
            if(new_bit){
                nofo--;
            }
            if(new_bit==prev_bit)
                return false;
            prev_bit=new_bit;
            n=n>>1;
        }
        return true;
    }
};