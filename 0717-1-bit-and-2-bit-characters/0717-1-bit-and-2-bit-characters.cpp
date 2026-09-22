class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        for(int i=0;i<bits.size();){
            if(i==bits.size()-1 && bits[i]==0)
                return true;
            if(bits[i]==0){
                i++;
                continue;
            }
            if(bits[i]==1){
                if(i==bits.size()-1)
                    return false;
                i=i+2;
            }
        }
        return false;
    }
};