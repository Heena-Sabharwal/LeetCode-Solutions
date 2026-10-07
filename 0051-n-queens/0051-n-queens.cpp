class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> current;
        backtrack(0, n, current);
        return res;
    }

    void backtrack(int row, int n, vector<string> &current){
        if(row==n){
            res.push_back(current);
            return;
        }
        for(int col=0;col<n;col++){

            if(isSafe(row,col,current,n)){

                string add="";
                for(int i=0;i<n;i++){
                    if(i==col)
                        add+="Q";
                    else
                        add+=".";
                }

                current.push_back(add);
                backtrack(row+1, n, current);
                current.pop_back();
            }
        }
    }

    bool isSafe(int row,int col, vector<string>&current, int n){
        for(int i=row-1;i>=0;i--){
            string check=current[i];
            if(check[col]=='Q')
                return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            string check=current[i];
            if(check[j]=='Q')
                return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            string check=current[i];
            if(check[j]=='Q')
                return false;
        }
        return true;
    }

};