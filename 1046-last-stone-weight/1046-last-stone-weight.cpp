class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;

        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        int h=0,sh=0;
        while(1){
            if(pq.size()>1){
                int x=pq.top();
                pq.pop();
                int y=pq.top();
                pq.pop();

                if(x!=y){
                    pq.push(x-y);
                }
            }
            else
                break;
            
        }
        if(pq.size()==1)
            return pq.top();
        return 0;
    }
};