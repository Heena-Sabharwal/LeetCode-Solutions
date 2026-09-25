class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(char c:s){
            if(!st.empty()){
                if(st.top()==c){
                    st.pop();
                }
                else
                    st.push(c);
            }
            else
            st.push(c);
        }
        string rd="";
        while(!st.empty()){
            rd+=st.top();
            st.pop();
        }
        reverse(rd.begin(),rd.end());
        
        return rd;
    }
};