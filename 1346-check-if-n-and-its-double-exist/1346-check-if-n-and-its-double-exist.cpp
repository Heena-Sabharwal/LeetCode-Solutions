class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;

        for(auto it:mp){
            if(mp.count(2*it.first) && (2*it.first!=it.first))
                return true;
            else if(it.first*2==it.first){
                if(mp[it.first]>1)
                    return true;
            }
        }
        return false;
    }
};