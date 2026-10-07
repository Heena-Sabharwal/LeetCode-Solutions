class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;

        for(auto num:nums){
            string temp=to_string(num);
            char max_char=temp[0];
            for(auto c:temp){
                if(c>max_char)
                    max_char=c;
            }
            int max_digit=max_char-'0';
            mp[max_digit].push_back(num);
        }

        vector<int>res;

        for(auto it:mp){
            if(it.second.size()>1){
                auto &v=it.second;

                sort(v.begin(),v.end());

                res.push_back(v[v.size()-1]+v[v.size()-2]);
            }
        }
        if(res.size()==0)
            return -1;

        sort(res.begin(),res.end());
        return res[res.size()-1];


    }
};