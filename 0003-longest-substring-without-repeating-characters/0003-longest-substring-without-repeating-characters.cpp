class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start_index=0;
        unordered_set<char>uns;
        int res=0;

        int j=0;
        for(int i=0;i<s.size();i++){
            if(!uns.count(s[i])){
                uns.insert(s[i]);
                res++;
            }
            else{
                j=i;
                break;
            }
        }

        int len=res;
        while(j<s.size()){
            while(uns.count(s[j])){
                uns.erase(s[start_index]);
                start_index++;
                len--;
            }
            if(!uns.count(s[j])){
                uns.insert(s[j]);
                j++;
                len++;
                res=max(res,len);
            }
        }

        return res;
        
    }
};