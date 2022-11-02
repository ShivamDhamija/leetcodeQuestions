class Bank {
public:
    unordered_map<int,long long>m;
    Bank(vector<long long>& b) {
        for(int i=0;i<b.size();i++)
            m[i+1]=b[i];
    }
    
    bool transfer(int a1, int a2, long long mo) {
        if(m.find(a1)==m.end()||m.find(a2)==m.end()||m[a1]<mo)
            return false;
        m[a2]+=mo;
        m[a1]-=mo;
        return true;
    }
    
    bool deposit(int a, long long mo) {
        if(m.find(a)==m.end())return false;
        m[a]+=mo;
        return true;
    }
    
    bool withdraw(int a, long long mo) {
        if(m.find(a)==m.end()||m[a]<mo)return false;
        m[a]-=mo;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */