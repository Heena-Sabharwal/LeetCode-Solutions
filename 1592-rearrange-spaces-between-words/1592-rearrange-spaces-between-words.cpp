class Solution {
public:
    string reorderSpaces(string text) {
        int spaces=0,words=0;
        vector<string>v;
        string word="";
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                spaces++;
                if(word.size()>0){
                    v.push_back(word);
                    word="";
                    words++;
                }
            }
            else{
                word+=text[i];
            }
        }
        if(word.size()>0){
            v.push_back(word);
            words++;
        }

        string res="";

        if (words == 1) {
            return v[0] + string(spaces, ' ');
        }
        
        int bw_space=spaces/(words-1);
        int rem=spaces%(words-1);

        for(int i=0;i<v.size()-1;i++){
            res+=v[i];
            for(int j=0;j<bw_space;j++){
                res+=" ";
            }
        }

        res+=v[v.size()-1];
        for(int j=0;j<rem;j++){
                res+=" ";
            }
        return res;
        
    }
};