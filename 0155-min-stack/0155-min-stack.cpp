class MinStack {
public:
unordered_map<int,int>count;
priority_queue<int,vector<int>,greater<int>>q;
stack<int>s;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        count[val]++;
        q.push(val);
    }
    
    void pop() {
        count[s.top()]--;
        s.pop();
    }
    
    int top() {
        while(count[s.top()]<=0)s.pop();
        return s.top();
    }
    
    int getMin() {
        while(count[q.top()]<=0)q.pop();
        return q.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */