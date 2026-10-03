class Solution {
public:
    int minBitFlips(int start, int goal) {
        if(start<goal)
            swap(start,goal);
        
        int lo=0;
        int temp=start;
        for(int i=0;i<31;i++){
            if(temp&1)
                lo=i;
            temp=temp>>1;
        }

        int mbf=0;
        for(int i=0;i<=lo;i++){
            int s=start&1;
            start=start>>1;
            int g=goal&1;
            goal=goal>>1;

            if(s^g)
                mbf++;
        }

        return mbf;
    }
};