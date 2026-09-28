class Solution {
public:
    string thousandSeparator(int n) {

        if(n==0)
            return "0";
            
        string res="";
        int size=0;
        while(n){
            if(size%3==0 && size!=0)
                res="."+res;
            int rem=n%10;
            res=to_string(rem)+res;
            size++;
            n/=10;
        }

        return res;
    }
};