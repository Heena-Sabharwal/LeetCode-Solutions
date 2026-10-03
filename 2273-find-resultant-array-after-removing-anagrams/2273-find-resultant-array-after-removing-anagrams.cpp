class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_map<char,int>mp1;

        for(auto c:words[0])
            mp1[c]++;

        unordered_map<char,int>mp2;
        for(int i=1;i<words.size();){
            for(auto c:words[i]){
                mp2[c]++;
            }
            if(mp1==mp2){
                mp2.clear();
                words.erase(words.begin()+i);
            }
            else{
                mp1=mp2;
                mp2.clear();
                i++;
            }
        }
        return words;



    }
};