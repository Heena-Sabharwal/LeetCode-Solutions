class Solution {
public:
    int hammingWeight(int n) {
        
        int ones=0;

        for(int i=0;i<31;i++){
            if(n & 1<<i)
                ones++;
        }
        return ones;

    }
};