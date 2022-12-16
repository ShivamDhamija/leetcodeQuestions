class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;
    MyQueue() {
        
    }
    void enter()
    {
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
    }
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st2.empty())
        {
            if(st1.empty())
                return -1;
            else
            enter();
        }
        int x=st2.top();
        st2.pop();
        return x;
    }
    
    int peek() {
        if(st2.empty())
        {
            if(st1.empty())
                return -1;
            else
            enter();
        }
        int x=st2.top();
        
        return x;
    }
    
    bool empty() {
        return st1.empty()&&st2.empty();
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