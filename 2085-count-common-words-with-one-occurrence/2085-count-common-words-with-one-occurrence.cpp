class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;

        for(auto word:words1){
            mp1[word]++;
        }
        for(auto word:words2){
            mp2[word]++;
        }
        int res=0;
        for(auto it:mp1){
            if(it.second==1){
                if(mp2.count(it.first) && mp2[it.first]==1)
                    res++;

            }
        }
        return res;
    }
};