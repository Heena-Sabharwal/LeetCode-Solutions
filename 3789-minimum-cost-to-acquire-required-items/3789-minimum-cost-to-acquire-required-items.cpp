class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long res=0;
    
        if((long)costBoth>=(long)cost1+(long)cost2){
            return (long)cost1*need1 + (long)cost2*need2;
        }

        int minNeed=min(need1,need2);
        int remNeed=max(need1,need2)-minNeed;
        int wNeed,cNeed;
        if(need1>need2){
            cNeed=(long)cost1;
        }
        else{
            cNeed=(long)cost2;
        }

        res+=minNeed*(long)costBoth;
        res+=min(remNeed*(long)cNeed, remNeed*(long)costBoth);

        return res;

    }
};