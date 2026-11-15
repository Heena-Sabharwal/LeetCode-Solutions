class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_set<int>st;

        st.insert(edges[0][1]);
        st.insert(edges[0][0]);

        if(st.count(edges[1][0]))
            return edges[1][0];
        return edges[1][1];
    }
};