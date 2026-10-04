class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int>start;
        vector<int>end;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }

        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        int i=0,j=0,overlaps=0,max_overlaps=0;

        while(i<n && j<n){
            if(start[i]<=end[j]){
                overlaps++;
                i++;
            }
            else{
                overlaps--;
                j++;
            }
            max_overlaps=max(max_overlaps,overlaps);
        }

        return max_overlaps;

    }
};