class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>set;

        for(char c:jewels){
            set.insert(c);
        }
        int j=0;
        for(char c:stones){
            if(set.count(c))
                j++;
        }
        return j;
    }
};