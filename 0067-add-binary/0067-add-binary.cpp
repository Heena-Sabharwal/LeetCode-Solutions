class Solution {
public:
    string addBinary(string a, string b) {

        if(a.size()<b.size()){
            swap(a,b);
        }
        int size_diff=a.size()-b.size();
        for(int i=0;i<size_diff;i++){
            b="0"+b;
        }

        int carry=0;
        string ans="";

        for(int i=a.size()-1;i>=0;i--){
            int f=(a[i])-'0';
            int s=b[i]-'0';

            int t=s^f^carry;

            string target=to_string(t);
            ans=target+ans;

            carry=(f+s+carry)/2;
        }
        if(carry==1){
            ans="1"+ans;
        }
        return ans;
    }
};