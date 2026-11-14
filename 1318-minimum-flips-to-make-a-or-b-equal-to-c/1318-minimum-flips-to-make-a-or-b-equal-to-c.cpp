class Solution {
public:
    int minFlips(int a, int b, int c) {
        int orr=a|b;
        if(orr==c)
            return 0;

        int res=0;
        int bit_c,bit_orr,bit_a,bit_b;

        for(int i=0;i<30;i++){
            bit_c=c&1;
            bit_orr=orr&1;
            bit_a=a&1;
            bit_b=b&1;

            if(bit_c!=bit_orr){
                if(bit_c==1)
                    res++;
                else{
                    if(bit_a==bit_b)
                        res+=2;
                    else
                        res++;
                }
            }
            c=c>>1;
            a=a>>1;
            b=b>>1;
            orr=orr>>1;
        }

        return res;
    }
};