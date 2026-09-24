class Solution {
public:
    string removeOuterParentheses(string s) {
        stack <char> st;

        string rp="";

        for(char c:s){
            if(c=='('){
                if(st.empty())
                    st.push(c);
                else{
                    st.push(c);
                    rp+=c;
                }
            }
            else{
                if(st.size()>1){
                    rp+=c;
                    st.pop();
                }
                else{
                    st.pop();
                }

            }
        }
        return rp;
    }
};