class Solution {
public:
    struct cmp {
    bool operator()(pair<int,int> a, pair<int,int> b) {
        if (abs(a.first) == abs(b.first))
            return a.second < b.second;  // smaller value gets higher priority
        return abs(a.first) < abs(b.first);
    }
    };

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>, vector<pair<int,int>>,cmp>pq;

        for(int i=0;i<arr.size();i++){
            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k)
                pq.pop();
        }

        vector<int>res;

        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};