class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;

        for(int i=lowLimit;i<=highLimit;i++){
            int num=i;
            int sum=0;
            while(num>9){
                sum+=num%10;
                num=num/10;
            }
            sum+=num;
            mp[sum]++;
        }

        int high=0;

        for(auto it:mp){
            if(it.second>high)
                high=it.second;
        }

        return high;
    }
};