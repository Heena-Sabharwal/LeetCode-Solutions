class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        vector<vector<int>>res(n, vector<int>(n));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                res[i][abs(n-1-j)]=image[i][j]^1;
            }
        }

        return res;
    }
};