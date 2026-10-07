class Solution {
public:
    vector<string> res;
    string hour = "0000";
    string mins = "000000";

    void backtrack(int index, int turnedOn) {
        if (turnedOn == 0) {
            int h = stoi(hour, nullptr, 2);
            int m = stoi(mins, nullptr, 2);

            if (h < 12 && m < 60) {
                string ans = to_string(h) + ":";

                if (m < 10)
                    ans += "0";

                ans += to_string(m);
                res.push_back(ans);
            }
            return;
        }

        if (index == 10)
            return;

        if (index < 4) {
            hour[index] = '1';
            backtrack(index + 1, turnedOn - 1);
            hour[index] = '0';
        } 
        else {
            mins[index - 4] = '1';
            backtrack(index + 1, turnedOn - 1);
            mins[index - 4] = '0';
        }

        backtrack(index + 1, turnedOn);
    }

    vector<string> readBinaryWatch(int turnedOn) {
        backtrack(0, turnedOn);
        return res;
    }
};

// class Solution {
// public:
//     vector<string> readBinaryWatch(int turnedOn) {
        
//     }
//     vector<string>res;
//     string hour=0000;
//     string mins=00000;
    
//     void backtrack(int n, int sum){
//         if(n==sum){
//             int dec_h=stoi(hour,nullptr,2);
//             int dec_m=stoi(mins,nullptr,2);
//             string ans="";
//             ans+=to_string(dec_h);
//             ans+=":"
//             if(dec_m%10<=0){
//                 ans+="0";
//             }
//             ans+=to_string(dec_m);
//             res+=ans;
//             return;
//         }
//         for(int i=hour.size()-1;i>=0;i--){
//             hour[i]=1;
//             backtrack(n,sum+1);
//             for(int j=mins.size()-1;j>=0;j--){
//                 mins[j]=1;
//                 backtrack(n,sum+1);
//                 mins[j]=0;
//             }
//             hour[i]=0;
//         }
//     }
// };