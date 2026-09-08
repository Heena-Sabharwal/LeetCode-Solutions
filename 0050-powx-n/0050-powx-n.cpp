class Solution {
public:
    double myPow(double x, int n) {
        long long m=n;
        if(m==0)
            return 1;
        if(x==0)
            return 0;
        if(m<0){
            x=1/x;
            m=-m;
        }
        double y=1;
        while(m){
            if(m%2!=0)
                y=y*x;
            x=x*x;
            m=m/2;
        }
        return y;
    }
};