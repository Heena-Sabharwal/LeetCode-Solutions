class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";

    int i = 0;
    int j = s.size() - 1;

    while(i < j){
        if(vowels.find(s[i]) == string::npos)
            i++;
        else if(vowels.find(s[j]) == string::npos)
            j--;
        else{
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    return s;


        // string vowels="aeiouAEIOU";
        // for(int i=0,j=s.size()-1;i<=j;){
        //     if(vowels.find(s[i])==string::npos )
        //         i++;
        //     if(vowels.find(s[j])==string::npos )
        //         j--;
        //     if(vowels.find(s[i])!=string::npos && vowels.find(s[j])!=string::npos){
        //         char c=s[i];
        //         s[i]=s[j];
        //         s[j]=c;
        //         i++;
        //         j--;
        //     }
        // }
        // return s;




        // vector<char>arr;
        // for(int i=0;i<s.size();i++){
        //     if(vowels.find(s[i])!=string::npos)
        //     arr.push_back(s[i]);
        // }
        // string ans="";
        // int j=arr.size()-1;
        // for(int i=0;i<s.size();i++){
        //     if(vowels.find(s[i])!=string::npos){
        //         ans+=arr[j];
        //         j--;
        //     }
        //     else
        //         ans+=s[i];
        // }
        // return ans;
    }
};