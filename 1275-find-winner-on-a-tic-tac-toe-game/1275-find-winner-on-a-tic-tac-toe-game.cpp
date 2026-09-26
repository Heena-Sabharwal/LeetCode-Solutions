class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        
        vector<vector<char>> v(9, vector<char>(9, 'x'));

        for(int i=0;i<moves.size();i++){
            if(i%2==0){
                v[moves[i][0]][moves[i][1]]='a';
            }
            else
                v[moves[i][0]][moves[i][1]]='b';
        }

        unordered_map<char,int>mp;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                mp[v[i][j]]++;
            }
            if(mp['a']==3)
                return "A";
            else if(mp['b']==3)
                return "B";
            mp.clear();
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                mp[v[j][i]]++;
            }
            if(mp['a']==3)
                return "A";
            else if(mp['b']==3)
                return "B";
            mp.clear();
        }

        if(v[0][0] == v[1][1] && v[1][1] == v[2][2]){
            if(v[1][1]=='a' || v[1][1]=='b'){
            string res="";
            res+=toupper(v[0][0]);
            return res;
            }
        }
        if(v[0][2] == v[1][1] && v[1][1] == v[2][0]){

            if(v[1][1]=='a' || v[1][1]=='b'){
            string res="";
            res+=toupper(v[1][1]);
            return res;
            }
        }

        if(moves.size()<9)
        return "Pending";
        
        return "Draw";
    }
};