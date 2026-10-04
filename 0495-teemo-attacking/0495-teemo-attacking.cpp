class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res=0;
        for(int i=1;i<timeSeries.size();i++){
            if(timeSeries[i]-timeSeries[i-1]>=duration){
                res+=duration;
            }
            else
                res=res+(timeSeries[i]-timeSeries[i-1]);
        }
        res+=duration;
        return res;
    }
};