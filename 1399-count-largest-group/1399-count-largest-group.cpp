class Solution {
public:
    int countLargestGroup(int n) {

        unordered_map<int,int>mp;
        int max_count=0;

        for(int i=1;i<=n;i++){
            int num=i;
            int sum=0;
            while(num>9){
                sum+=num%10;
                num=num/10;
            }
            sum+=num;
            mp[sum]++;
            max_count=max(mp[sum],max_count);
        }

        int res=0;

        for(auto it:mp){
            if(it.second==max_count)
                res++;
        }
        return res;

    }
};