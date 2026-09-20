class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>mp1;
        unordered_map<string,int>s;

        for(int i=0;i<list1.size();i++)
            mp1[list1[i]]=i;

        int min_sum=INT_MAX;

        for(int i=0;i<list2.size();i++){
            if(mp1.count(list2[i])){
                int sum=i+mp1[list2[i]];
                if(sum<min_sum){
                    min_sum=sum;
                }
                s[list2[i]]=sum;
            }
        }

        vector<string>res;

        for(auto it:s){
            if(it.second==min_sum)
                res.push_back(it.first);
        }
        return res;
    }
};