class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int>freq;
        for(int i=0;i<arr.size();i++)
            freq[arr[i]]++;

        priority_queue<int>pq;

        for(auto it:freq){
            pq.push(it.second);
        }

        int res=0;
        int n=arr.size();
        int half=n/2;
        while(n>half){
            res++;
            n-=pq.top();
            pq.pop();
            
        }
        return res;
    }
};