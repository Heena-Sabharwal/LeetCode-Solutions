class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string>st;

        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int one=stoi(st.top());
                st.pop();
                int two=stoi(st.top());
                st.push(to_string(one));
                st.push(to_string(one+two));
            }
            else if(operations[i]=="C")
                st.pop();
            else if(operations[i]=="D"){
                st.push(to_string(2*(stoi(st.top()))));
            }
            else{
                st.push(operations[i]);
            }
        }

        int sum=0;

        while(!st.empty()){
            sum+=stoi(st.top());
            st.pop();
        }
        return sum;
    }
};