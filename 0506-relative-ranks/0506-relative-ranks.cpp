class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int>mp;

        for(int i=0;i<score.size();i++){
            mp[score[i]]=i;
        }
        vector<int>dummy=score;
        sort(dummy.begin(),dummy.end(),greater<int>());

        vector<string>rr(score.size(),"");

        for(int i=0;i<score.size();i++){
            int num=dummy[i];
            int index=mp[num];
            if(i==0){
                rr[index]="Gold Medal";
            }
            else if(i==1){
                rr[index]="Silver Medal";
            }
            else if(i==2){
                rr[index]="Bronze Medal";
            }
            else{
                rr[index]=to_string(i+1);
            }


        }
        return rr;


    }
};