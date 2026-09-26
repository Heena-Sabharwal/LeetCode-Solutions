class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>freq;
        for(char c:text){
            freq[c]++;
        }
        string bal="balloon";
        unordered_map<char,int>temp;
        for(char c:bal){
            temp[c]++;
        }
        int res=0;
        while(1){
            bool include=true;
            for(auto it:temp){
                if(!freq.count(it.first) || freq[it.first]<it.second){
                    include=false;
                    break;
                }
                freq[it.first]-=it.second;
            }
            if(!include)
                break;
            else
                res++;
        }
        return res;
    }
};