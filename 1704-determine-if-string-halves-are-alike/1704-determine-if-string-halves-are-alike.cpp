class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char>vowels={'a','e','i','o','u','A','E','I','O','U'};
        int mid1=0,mid2=0;
        for(int i=0;i<s.size()/2;i++){
            if(vowels.count(s[i]))
                mid1++;
        }
        for(int i=s.size()/2;i<s.size();i++){
            if(vowels.count(s[i]))
                mid2++;
        }
        return mid1==mid2;


        
    }
};