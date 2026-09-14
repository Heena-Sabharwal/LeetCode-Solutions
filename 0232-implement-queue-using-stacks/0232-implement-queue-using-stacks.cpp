class MyQueue {
public:
    stack<int>A,B;    
    MyQueue() {
        
    }
    
    void push(int x) {
        A.push(x);
    }
    
    int pop() {
        if(B.empty()){
            while(!A.empty()){
                B.push(A.top());
                A.pop();
            }
        }
        int val=B.top();
        B.pop();
        return val;

        if(B.empty() && A.empty())
            return -1;
    }
    
    int peek() {
        if (B.empty()) {
            // Same transfer logic
            while (!A.empty()) {
                B.push(A.top());
                A.pop();
            }
        }
        
        return B.top();
    }
    
    
    bool empty() {
        return A.empty() && B.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */