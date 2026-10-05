class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0,odd=0;

        for(int i=0;i<31;i++){
            if(n&1){
                if(i%2)
                    odd++;
                else
                    even++;
            }
            n=n>>1;
        }

        vector<int>ans;
        ans.push_back(even);
        ans.push_back(odd);

        return ans;

    }
};