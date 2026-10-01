class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;

        for(auto c:s)
            mp[c]++;

        unordered_set<int>dist_freq;
        vector<int>freq;

        for(auto it:mp){
            freq.push_back(it.second);
            dist_freq.insert(it.second);
        }
        sort(freq.begin(),freq.end());

        int res=0;

        for(int i=freq.size()-1;i>0;i--){
            if(freq[i]==freq[i-1]){
                int temp=freq[i]-1;
                while(temp){
                    if(!dist_freq.count(temp))
                        break;
                    temp--;
                }

                res+=freq[i]-temp;
                if(temp){
                    dist_freq.insert(temp);
                }

            }
        }
        return res;
    }
};