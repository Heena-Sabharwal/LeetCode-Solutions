class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string>v;

        string word="";
        for(int i=0;i<sentence.size();i++){
           if(sentence[i]==' '){
                v.push_back(word);
                word="";
            }
            else{
                word+=sentence[i];
            }
        }
        v.push_back(word);

        for(int i=0;i<v.size();i++){
            if(v[i].size()>=searchWord.size()){
                for(int j=0;j<searchWord.size();j++){
                    if(searchWord[j]!=v[i][j])
                        break;
                    if(searchWord[j]==v[i][j] && j==searchWord.size()-1)
                        return i+1;
                }
            }

        }

        return -1;
    }
};