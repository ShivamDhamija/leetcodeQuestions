class Solution {
public:
    bool equalFrequency(string w) {
        map<int,int>c;
        unordered_map<char,int>m;
        for(auto i:w)        
            m[i]++;            
        for(auto i:m)
            c[i.second]++;
        if(c.size()>2)return false;
        if(c.size()==1)
        {if(m.size()==1||c.begin()->first==1)
                return true;
            else
                return false;}
        auto a=c.begin();
        a++;
        if(c.begin()->first==1&&c.begin()->second==1)return true;
           if(a->first-1==c.begin()->first&&a->second==1)return true;
        return false;
    }
};
