class FrontMiddleBackQueue {
public:
    deque<int>d;
    void pushCall(int size,int val)
    {
        
        stack<int>st;
        while(!d.empty()&&d.size()>=size)
        {
            st.push(d.back());
            d.pop_back();
        }
         st.push(val);   
        while(!st.empty())
        {
            d.push_back(st.top());
            st.pop();
        }
    }
    int popCall(int size)
    {
        int x=-1;
        stack<int>st;
        while(!d.empty()&&d.size()>size)
        {
            st.push(d.back());
            d.pop_back();
        }
        if(!st.empty())
        { x=st.top();
        st.pop();
        }while(!st.empty())
        {
            d.push_back(st.top());
            st.pop();
        }
        return x;
    }
    
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        d.push_front(val);
        
    }
    
    void pushMiddle(int val) {
        int size,no=d.size();
        if(no%2==0)
            size=no/2+1;
        else
            size=no/2+1;
        if(size<0)
            size=0;
        pushCall(size,val);
        
    }
    
    void pushBack(int val) {
        d.push_back(val);
       
    }
    
    int popFront() {
        int x=-1;
        if(!d.empty())
        {
            x=d.front();
            d.pop_front();
        }
        
        return x;
    }
    
    int popMiddle() {
        if(d.size()==0)
            return -1;
        int size,no=d.size();
        if(no%2==0)
            size=no/2-1;
        else
            size=no/2;
        if(size<0)
            size=0;
        int x= popCall(size);
       
        return x;
    }
    
    int popBack() {
        int x=-1;
        if(!d.empty())
        {
            x=d.back();
            d.pop_back();
        }
       
        return x;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */