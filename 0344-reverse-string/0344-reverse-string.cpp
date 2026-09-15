class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1;
        int len;
        if(s.size()%2==0)
            len=s.size()/2;
        else
            len=s.size()/2+1 ;

        for(int i=0;i<len;i++){
            auto c=s[i];
            s[i]=s[j];
            s[j]=c;
            j--;
        }
    }
};