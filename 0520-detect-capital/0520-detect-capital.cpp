class Solution {
public:
    bool detectCapitalUse(string word) {
        int caps=0;

        for(auto c:word){
            if(toupper(c)==c)
                caps++;
        }

        if(caps==word.size() || caps==0)
            return true;
        
        if(caps==1 && toupper(word[0])==word[0])
            return true;
        
        return false;
    }
};