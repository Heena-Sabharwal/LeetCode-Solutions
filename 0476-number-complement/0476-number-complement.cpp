class Solution {
public:
    int findComplement(int num) {
        int nofo=0;
        int n=num;
        for(int i=0;i<31;i++){
            if(n&1)
                nofo++;
            n=n>>1;
        }

        int number=num;
        for(int i=0;i<31;i++){
            if(!nofo)
                break;
            if(number&1){
                num=num&(~(1<<i));
                nofo--;
            }
            else{
                num=num|(1<<i);
            }
            number=number>>1;
        }

        return num;
    }
};