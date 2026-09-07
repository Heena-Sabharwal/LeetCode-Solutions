class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        
        while(1){
            while(num){
                sum+=num%10;
                num/=10;
            }
            if(sum<=9)
                break;
            else{
                num=sum;
                sum=0;
            }
        }
        return sum;
    }
};