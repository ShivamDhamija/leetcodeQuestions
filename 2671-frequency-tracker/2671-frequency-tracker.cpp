class FrequencyTracker {
public:
    unordered_map<int,int>m;
    unordered_map<int,int>mf;
    
    FrequencyTracker() {
        
    }
    
    void add(int n) {
        if(m.find(n)!=m.end())
            mf[m[n]]--;
        m[n]++;
        mf[m[n]]++;
    }
    
    void deleteOne(int n) {
        if(m.find(n)!=m.end())
        {
            mf[m[n]]--;
            m[n]--;            
            mf[m[n]]++;
        }
        if(m[n]==0)m.erase(n);
            
    }
    
    bool hasFrequency(int f) {
        return mf[f]>0;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */