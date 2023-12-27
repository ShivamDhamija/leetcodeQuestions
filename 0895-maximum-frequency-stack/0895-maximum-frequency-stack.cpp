class FreqStack {
public:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> m;
    int maxfreq = 0;
    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        m[freq[val]].push(val);
        maxfreq=max(maxfreq,freq[val]);
    }
    
    int pop() {
        int a=m[maxfreq].top();
        m[maxfreq].pop();
        freq[a]--;
        m[maxfreq].size()==0?maxfreq--:maxfreq;
        return a;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */