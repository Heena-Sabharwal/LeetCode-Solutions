class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>freq;

        for(char c:chars){
            freq[c]++;
        }
        int res=0;
        for(int i=0;i<words.size();i++){
            unordered_map<char,int>temp;
            for(char c:words[i])
                temp[c]++;

            bool include=true;
            for(auto it:temp){
                if(!freq.count(it.first) || freq[it.first]<it.second){
                    include=false;
                    break;
                }
            }
            if(include){
                res+=words[i].size();
            }
        }

        return res;
    }
};