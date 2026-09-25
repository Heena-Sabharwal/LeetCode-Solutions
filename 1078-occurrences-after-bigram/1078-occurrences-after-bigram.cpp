class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string>words;

        string word;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                words.push_back(word);
                word="";
            }
            else
                word+=text[i];
        }
        words.push_back(word);

        vector<string>res;

        for(int i=0;i<words.size()-2;i++){
            if(words[i]==first && words[i+1]==second)
                res.push_back(words[i+2]);
        }

        return res;
    }
};