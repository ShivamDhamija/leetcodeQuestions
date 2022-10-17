class Solution {
public:
    bool find(vector<int>& n,int l,int r)
    {
        if(r==l)return false;
        vector<int>v;
        for(int i=l;i<=r;i++)
            v.push_back(n[i]);
        sort(v.begin(),v.end());
        bool ans=true;
        int d=v[1]-v[0];
        for(int i=1;i<v.size();i++)
        {
            int a=v[i]-v[i-1];
            if(a!=d)
                ans=false;
            d=a;
        }
        
        return ans;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& n, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        
        for(int i=0;i<l.size();i++)
        {
            ans.push_back(find(n,l[i],r[i]));
        }
        
        
        return ans;
    }
};