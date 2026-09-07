class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;

        vector<vector<char>>v(numRows);

        int i=0, row=0;

        bool down=true;
        while(i<s.size()){
            v[row].push_back(s[i]);
            
            if(row==numRows-1)
                down=false;
            if(row==0)
                down=true;
            
            if(down)
                row++;
            else
                row--;

            i++;
        }

        string res="";
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++)
                res+=v[i][j];
        }

        return res;
    }
};