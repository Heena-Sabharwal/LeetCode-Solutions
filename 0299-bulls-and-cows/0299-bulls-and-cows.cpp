class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>matches;

        int bulls=0,cows=0;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i])
                bulls++;
            else
            matches[secret[i]]++;
        }

        for(int i=0;i<guess.size();i++){
            if (secret[i] != guess[i] && matches[guess[i]] > 0) {
            cows++;
            matches[guess[i]]--;
        }
        }

        return to_string(bulls)+"A"+to_string(cows)+"B";

    }
};