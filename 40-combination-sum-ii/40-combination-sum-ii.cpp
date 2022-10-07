class Solution {
public:
    void call(int i,vector<vector<int>>&ans,vector<int>v,vector<int>&c,int t)
    {
        if(t==0)
        {
            ans.push_back(v);
        }
        if(t<0||i>=c.size())
            return ;
        for(int j=i;j<c.size();j++)
        {
            if(i!=j&&c[j]==c[j-1])
                continue;
            v.push_back(c[j]);
            call(j+1,ans,v,c,t-c[j]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<vector<int>>ans;
        vector<int>v;
        call(0,ans,v,c,t);
        
        return ans;
    }
};