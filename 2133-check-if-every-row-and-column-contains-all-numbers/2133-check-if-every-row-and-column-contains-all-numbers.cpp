class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            unordered_set<int>st;
                for(int j=0;j<matrix.size();j++){
                    st.insert(matrix[i][j]);
                }
            if(st.size()!=matrix.size())
                return false;
        }
        for(int i=0;i<matrix.size();i++){
            unordered_set<int>st;
                for(int j=0;j<matrix.size();j++){
                    st.insert(matrix[j][i]);
                }
            if(st.size()!=matrix.size())
                return false;
        }
        return true;
    }
};