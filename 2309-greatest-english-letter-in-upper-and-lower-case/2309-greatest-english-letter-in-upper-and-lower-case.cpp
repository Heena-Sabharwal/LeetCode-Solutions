class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char>big;

        for(auto c:s){
            if(c>='A' && c<='Z')
                big.insert(c);
        }
        unordered_set<char>yesbig;
        for(auto c:s){
            if(c>='a' && c<='z'){
                if(big.count(toupper(c)))
                    yesbig.insert(toupper(c));
            }
        }

        if(yesbig.size()==0)
            return "";
        
        priority_queue<char>pq;
        for(auto c:yesbig){
            pq.push(c);
        }
        string res="";

        res+=pq.top();

        return res;
    }
};