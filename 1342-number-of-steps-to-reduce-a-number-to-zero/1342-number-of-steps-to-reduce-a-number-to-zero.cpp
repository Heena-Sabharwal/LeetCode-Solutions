class Solution {
public:
    int numberOfSteps(int num) {
        int to=0;
        int lo=0;

        for(int i=0;i<31;i++){
            if(num & 1){
                to++;
                lo=i;
            }
            num=num>>1;
        }
        return to+lo;
    }
};