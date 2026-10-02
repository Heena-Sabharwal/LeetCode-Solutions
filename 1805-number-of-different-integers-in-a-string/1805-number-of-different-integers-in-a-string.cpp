class Solution {
public:
    int numDifferentIntegers(string word) {

        unordered_set<string>res;
        bool ok=false;
        string temp="";

        for(int i=0;i<word.size();i++){
            if(word[i]<='9' && word[i]>='0'){ 
                temp+=word[i];
                ok=true;  
            }
            else{
                if(temp.size()>=1){
                    res.insert(temp);
                    ok=false;
                    temp.clear();
                }
            }
        }
        if(temp.size()>=1){
            res.insert(temp);      
        }

        unordered_set<string>fres;

        for(auto it:res){
            int i=0;
            for(i;i<it.size()-1;i++){
                if(it[i]>='1'){
                    break;
                }
            }
            fres.insert(it.substr(i));
        }

        return fres.size();
    }
};