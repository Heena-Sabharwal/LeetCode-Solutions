class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;

        for(int i=0;i<arr.size();i++){
            mp1[arr[i]]++;
            mp2[target[i]]++;
        }
        if(mp1==mp2)
            return true;
        return false;
    }
};