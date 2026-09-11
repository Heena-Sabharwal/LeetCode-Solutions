class Solution {
public:
    bool isPalindrome(string s) {
        string another="";

        for(char c:s){
            if((c>='0' && c<='9')||(c>='A' && c<='Z')||(c>='a' && c<='z')){
                another+=tolower(c);
            }
        }

        int n=another.size();
        int left=0,right=n-1;

        while(left<=right){
            if(another[left]!=another[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};