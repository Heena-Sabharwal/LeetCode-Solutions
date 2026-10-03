class Solution {
public:
    int countPoints(string rings) {
        vector<vector<int>>v(10, vector<int>(3));
        for(int i=0;i<rings.size();i=i+2){
            char color=rings[i];
            int num=rings[i+1]-'0';

            if(color=='R')
                v[num][0]=1;
            else if(color=='G')
                v[num][1]=1;
            else
                v[num][2]=1;
        }
        int res=0;

        for(int i=0;i<v.size();i++){
            if(v[i][0] && v[i][1] && v[i][2])
                res++;
        }
        return res;

    }
};