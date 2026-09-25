class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>freq;

        for(int num:arr1){
            freq[num]++;
        }
        vector<int>res;
        for(int i=0;i<arr2.size();i++){
            while(freq[arr2[i]]){
                res.push_back(arr2[i]);
                freq[arr2[i]]--;
            }
            freq.erase(arr2[i]);
        }
        vector<int>temp;
        for(auto it:freq){
            while(it.second){
            temp.push_back(it.first);
            it.second--;
            }
        }
        sort(temp.begin(),temp.end());

        res.insert(res.end(),temp.begin(),temp.end());
        return res;
    }
};