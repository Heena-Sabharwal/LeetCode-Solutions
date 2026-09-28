struct hash_pair {
    size_t operator()(const pair<int,int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

class Solution {

public:
    bool isPathCrossing(string path) {
        pair<int,int>p={0,0};

        unordered_set<pair<int,int>, hash_pair> set;
        set.insert(p);
        for(char c:path){
            if(c=='N'){
                p.first+=1;
                if(set.count(p))
                    return true;
                set.insert(p);
            }
            else if(c=='E'){
                p.second+=1;
                if(set.count(p))
                    return true;
                set.insert(p);
            }
            else if(c=='S'){
                p.first-=1;
                if(set.count(p))
                    return true;
                set.insert(p);
            }
            else if(c=='W'){
                p.second-=1;
                if(set.count(p))
                    return true;
                set.insert(p);
            }
        }
        return false;
    }
};