class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;

        for(auto gift:gifts){
            pq.push(gift);
        }

        while(k){
            int x=floor(sqrt(pq.top()));
            pq.pop();
            pq.push(x);
            k--;
        }

        long long res=0;
        while(!pq.empty()){
            res+=pq.top();
            pq.pop();
        }
        return res;
    }
};