class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        if(s1==s2)
            return true;

        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int count=0;

        for(int i=0;i<s1.size();i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
            if(s1[i]!=s2[i])
                count++;
        }

        if(mp1!=mp2 || count!=2)
            return false;

        int f=-1,s=-1;

        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])
            {
                if(f==-1)
                    f=i;
                else
                    s=i;
            }

        }

        swap(s1[f],s1[s]);

        if(s1==s2)
            return true;
        return false;
        
    }
};