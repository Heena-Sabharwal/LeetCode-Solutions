class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<string>words;

        string word="";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                words.push_back(word);
                word="";
            }
            else{
                word+=sentence[i];
            }
        }
        words.push_back(word);

        unordered_set<char>st={'a','e','i','o','u'};

        string res="";
        for(int i=0;i<words.size();i++){
            auto word=words[i];
            if(st.count(tolower(word[0]))){
                res+=word;
            }
            else{
                char c=word[0];
                word.erase(0,1);
                res+=word;
                res+=c;
            }
            res+="ma";
            for(int j=0;j<i+1;j++){
                    res+="a";
            }
            if(i<words.size()-1)
            res+=" ";
        }

        return res;
    }
};