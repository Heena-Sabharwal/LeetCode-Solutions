class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>st;

        for(auto temp:candyType){
            st.insert(temp);
        }
        if(candyType.size()/2>st.size())
            return st.size();
        return candyType.size()/2;

    }
};