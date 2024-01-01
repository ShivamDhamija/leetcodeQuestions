class Solution {
public:
    void call(string s,unordered_map<string,int>&m)
    {
        string c="";
        for(auto i:s)
            c.push_back(i),m[c]++;
    }
    int maximumLength(string s) {
        unordered_map<string,int>m;
        string c="";
        int a=-1;
        for(auto i:s)
        {
            if(c.empty()==false&&c[c.size()-1]!=i)
                c="";
                c.push_back(i);
            // m[c]++; 
            call(c,m);
        }
        for(auto i:m)            
            if(i.second>2)                
                a=max(a,(int)i.first.length());
            else
                a=max(a,(i.first.length()>=3)?(int)i.first.length()-2:a);
        return a;
    }
};