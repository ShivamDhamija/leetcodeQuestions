class Solution {
public:
    int tupleSameProduct(vector<int>& n) {
        unordered_map<int,int>m;
        int ans=0;
        for(int i=0;i<n.size();i++)
        {
            for(int j=i+1;j<n.size();j++)
            {
                int t=n[i]*n[j];
                if(m.find(t)!=m.end())
                    ans+=8*m[t];
                m[t]++;
            }
        }
        return ans;
    }
};