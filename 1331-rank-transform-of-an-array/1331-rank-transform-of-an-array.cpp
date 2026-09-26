class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
        > pq;

        vector<int>res(arr.size(),0);

        for(int i=0;i<arr.size();i++){
            pq.push({arr[i],i});
        }

        int recent=INT_MAX;
        int rank=0;

        while(pq.size()){
            int num=pq.top().first;
            int index=pq.top().second;
            if(recent!=num)
                rank++;
            recent=num;
            res[index]=rank;
            pq.pop();
        }

        return res;


    }
};