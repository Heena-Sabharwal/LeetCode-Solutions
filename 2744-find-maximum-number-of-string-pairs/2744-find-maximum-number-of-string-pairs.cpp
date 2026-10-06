class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>st;

        for(auto s:words){
            st.insert(s);
        }

        int res=0;

        for(auto it=st.begin();it!=st.end();){

            string temp=*it;
            reverse(temp.begin(),temp.end());

            if(st.count(temp) && temp!=*it){
                res++;
                it=st.erase(it);
            }
            else
                ++it;
        }

        return res;
    }
};