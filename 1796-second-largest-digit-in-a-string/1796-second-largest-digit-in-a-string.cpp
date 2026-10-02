class Solution {
public:
    int secondHighest(string s) {
        set<char, greater<char>>st;

        for(char c:s){
            if(isdigit(c))
                st.insert(c);
        }
        if(st.size()<2)
            return -1;
        
        auto it=st.begin();
        advance(it,1);

        return *it-'0';
    }
};