class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>cities;

        for(int i=0;i<paths.size();i++){
            cities.insert(paths[i][0]);
            cities.insert(paths[i][1]);
        }

        for(int i=0;i<paths.size();i++){
            if(cities.count(paths[i][0]))
                cities.erase(paths[i][0]);
        }
        for(auto it:cities)
            return it;

        return "";
    }
};