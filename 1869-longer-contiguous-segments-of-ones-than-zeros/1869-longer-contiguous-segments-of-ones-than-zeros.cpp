class Solution {
public:
    bool checkZeroOnes(string s) {
        int currOnes = 0, currZeroes = 0;
    int maxOnes = 0, maxZeroes = 0;

    if(s[0] == '1') currOnes = 1;
    else currZeroes = 1;

    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1])
        {
            if(s[i] == '1')
                currOnes++;
            else
                currZeroes++;
        }
        else
        {
            if(s[i] == '1')
            {
                maxZeroes = max(maxZeroes, currZeroes);
                currZeroes = 0;
                currOnes = 1;
            }
            else
            {
                maxOnes = max(maxOnes, currOnes);
                currOnes = 0;
                currZeroes = 1;
            }
        }
    }

    maxOnes = max(maxOnes, currOnes);
    maxZeroes = max(maxZeroes, currZeroes);

    return maxOnes > maxZeroes;
    }
};