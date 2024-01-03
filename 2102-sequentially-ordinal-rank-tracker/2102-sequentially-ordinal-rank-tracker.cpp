class SORTracker {
public:
    set<pair<int,string>>s;
    set<pair<int,string>>::iterator a=s.end();
    SORTracker() {
        
    }
    
    void add(string name, int score) {
        auto i=s.insert({-score,name}).first;
        //cout<<(i.second);
        if(a==s.end()||*i<*a)
            a--;
    }
    
    string get() {
        return (a++)->second;
    }
};

/**
 * Your SORTracker object will be instantiated and called as such:
 * SORTracker* obj = new SORTracker();
 * obj->add(name,score);
 * string param_2 = obj->get();
 */