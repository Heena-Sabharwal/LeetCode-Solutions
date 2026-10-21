class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int i = 0;
        int n = intervals.size();

        while (i < n && intervals[i][1] < newInterval[0]) {
            res.push_back(intervals[i]);
            i++;
        }

        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }

        res.push_back(newInterval);

        while (i < n) {
            res.push_back(intervals[i]);
            i++;
        }

        return res;
        // vector<vector<int>>res;
        // if(intervals.size()==0){
        //     res.push_back(newInterval);
        //     return res;
        // }
        
        // int cstart=intervals[0][0];
        // int cend=intervals[0][1];
        // int i=0;
        // for(i=0;i<intervals.size();i++){
        //     if(newInterval[0]<=intervals[i][1]){
        //         cstart=newInterval[0];
        //         cend=max(intervals[i][1],cend);
        //         i++;
        //         break;
        //     }
        //     else{
        //         res.push_back(intervals[i]);
        //         cstart=intervals[i][0];
        //         cend=intervals[i][1];
        //     }
        // }
        // for(i;i<intervals.size();i++){
        //     if(cend>=intervals[i][0]){
        //         cend=max(cend,intervals[i][0]);
        //     }
        //     else{
        //         res.push_back({cstart,cend});
        //         cstart=intervals[i][0];
        //         cend=intervals[i][1];
        //     }
        // }
        // res.push_back({cstart,cend});
        // return res;
    }
};