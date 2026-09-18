class Solution {
public:
    string convertToBase7(int num) {
        string res="";
        bool neg=false;
        if(num<0){
            num=abs(num);
            neg=true;
        }
        while(num>=7){
            res=to_string(num%7)+res;
            num/=7;
        }
        res=to_string(num)+res;

        if(neg){
            res="-"+res;
        }

        return res;
    }
};