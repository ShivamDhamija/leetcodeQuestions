class Solution {
public:
    int minimumCardPickup(vector<int>& c) {
        unordered_map<int,int>m;
        int ans=INT_MAX;
        for(int i=0;i<c.size();i++)
        {
            if(m.find(c[i])!=m.end())
            {
                ans=min(ans,i-m[c[i]]+1);
            }
            m[c[i]]=i;
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};