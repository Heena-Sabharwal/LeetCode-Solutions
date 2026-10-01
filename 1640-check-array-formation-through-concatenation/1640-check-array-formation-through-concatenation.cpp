class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int, vector<int>> mp;

        for(auto piece : pieces) {
            mp[piece[0]] = piece;
        }

        int i = 0;

        while(i < arr.size()) {

            if(!mp.count(arr[i]))
                return false;

            vector<int>& v = mp[arr[i]];

            for(int j = 0; j < v.size(); j++) {

                if(i + j >= arr.size() || arr[i + j] != v[j])
                    return false;
            }

            i += v.size();
        }

        return true;
    }
};