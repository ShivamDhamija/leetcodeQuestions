class Solution {
public:
    set<vector<int>>s;
    int a=0;
    bool check(vector<int>&v)
    {
        for(int i=1;i<v.size();i++)
        {
            if(v[i]<v[i-1])return false;
        }
        return true;
    }
    void call(vector<int>& n,vector<int>& v,int i)
    {
        if(v.size()>1&&check(v))
            s.insert(v);
        if(i==n.size())
        {
            
            return ;
        }
        v.push_back(n[i]);
        call(n,v,i+1);
        v.pop_back();
        call(n,v,i+1);
           
    }
    vector<vector<int>> findSubsequences(vector<int>& n) {
        
        vector<int>v;
        call(n,v,0);
        vector<vector<int>> ans;
        for(auto i:s)
            ans.push_back(i);
        
        return ans;
    }
};