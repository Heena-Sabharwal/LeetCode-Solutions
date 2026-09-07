class Solution {
public:
    bool isThree(int n) {
        int div=0;

        for(int i=2;i<=n/2;i++){
            if(n%i==0)
                div++;
        }
        if(div==1)
            return true;
        return false;
    }
};