class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int>st;

        int a=0,b=0,size=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(st.count(grid[i][j]))
                    a=grid[i][j];
                st.insert(grid[i][j]);
                size++;
            }
        }

        for(int i=1;i<=size;i++){
            if(!st.count(i)){
                b=i;
                break;
            }
        }

        return {a,b};
    }
};