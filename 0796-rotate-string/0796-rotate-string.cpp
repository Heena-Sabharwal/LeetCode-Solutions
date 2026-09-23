class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.size()!=s.size())
            return false;
        string ss=s+s;
        if(ss.find(goal)!=string::npos)
            return true;
        return false;
    }
};