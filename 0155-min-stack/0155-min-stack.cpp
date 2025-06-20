class MinStack {
public:
stack<int>s;
int m;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){s.push(val);m=val;}
        else if(val<m){s.push(2*val-m);m=val;}
        else s.push(val);
    }
    
    void pop() {
        if(s.top()<m)m=2*m-s.top();
        s.pop();
    }
    
    int top() {
        if(s.top()<m)return m;
        return s.top();
    }
    
    int getMin() {
        return m;
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