class Solution {
public:
    string toHex(int num) {
        // if(num==0){
        //     return "0";
        // }
        // unordered_map<string,char> mp;

        // mp["0000"]='0';mp["0001"]='1';mp["0010"]='2';mp["0011"]='3';
        // mp["0100"]='4';mp["0101"]='5';mp["0110"]='6';mp["0111"]='7';
        // mp["1000"]='8';mp["1001"]='9';mp["1010"]='a';mp["1011"]='b';
        // mp["1100"]='c';mp["1101"]='d';mp["1110"]='e';mp["1111"]='f';

        // string ans="";

        // for(int i=0;i<8;i++){
        //     string str="";
        //     for(int j=0;j<4;j++){
        //         if((unsigned int)num&1)
        //             str="1"+str;
        //         else
        //             str="0"+str;
        //         num=num>>1;
        //     }

        //     ans=mp[str]+ans;

        // }
        // int i;
        // for(i=0;i<8;i++){
        //     if(ans[i]!='0')
        //         break;
        // }
        // if(i){
        //     ans.erase(0,i);
        // }
        // return ans;

        if (num == 0) return "0";
        
        string ans;
        char hex[] = "0123456789abcdef";  // Precomputed lookup table
        unsigned int unum = num;  // Treat as unsigned (handles 2's complement)
        
        while (unum > 0) {
            ans.push_back(hex[unum & 0xF]);  // Extract 4 bits, lookup char
            unum >>= 4;  // Shift by nibble (4 bits)
        }
        
        // Remove leading zeros (except for "0" already handled)
        while (ans.size() > 1 && ans.back() == '0') {
            ans.pop_back();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};