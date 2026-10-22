class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());

        int res=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hte=hours_to_eat(piles, mid);
            if(hte<=h){
                res=mid;
                high=mid-1;
            }
            else if(hte>h){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }

    long long hours_to_eat(vector<int>& piles, int n){
        long long res=0;
        for(int i=0;i<piles.size();i++){
            res += (piles[i] + n - 1LL) / n;
        }
        return res;
    }
};