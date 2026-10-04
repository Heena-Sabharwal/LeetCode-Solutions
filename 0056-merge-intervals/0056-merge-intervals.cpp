class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;

        int currStart=intervals[0][0];
        int currEnd=intervals[0][1];
        // int newEnd,nextStart,nextEnd;

        // for(int i=1;i<intervals.size();i++){
        //     newEnd=currEnd;
        //     nextStart=intervals[i][0];
        //     nextEnd=intervals[i][1];
        //     if(currEnd>=nextStart){
        //         newEnd=max(currEnd,nextEnd);
        //         currEnd=newEnd;
        //     }
        //     else{
        //         res.push_back({currStart,newEnd});
        //         currStart=nextStart;
        //         currEnd=nextEnd;
        //     }
        // }
        // res.push_back({currStart,newEnd});

        for(int i = 1; i < intervals.size(); i++) {
            int nextStart = intervals[i][0];
            int nextEnd = intervals[i][1];

            if(currEnd >= nextStart) {
                currEnd = max(currEnd, nextEnd);
            }
            else {
                res.push_back({currStart, currEnd});
                currStart = nextStart;
                currEnd = nextEnd;
            }
        }

        res.push_back({currStart, currEnd});

        return res;

    }
};