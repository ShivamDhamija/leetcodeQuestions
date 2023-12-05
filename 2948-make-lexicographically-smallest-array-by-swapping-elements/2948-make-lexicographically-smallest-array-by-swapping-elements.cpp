class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& n, int l) {        
        vector<vector<int>>m;
        for(int i=0;i<n.size();i++)
        {
            m.push_back({n[i],i});
        }
        sort(m.begin(),m.end());
        vector<int>t={m[0][1]};
        int s=0;
        for(int i=1;i<n.size();i++)
        {
            if(m[i][0]-m[i-1][0]>l)
            {
                sort(t.begin(),t.end());
                for(int j=0;j<t.size();j++)
                {
                    n[t[j]]=m[s][0];
                    s++;
                }
                t={};
            }
            t.push_back(m[i][1]);
        }
        sort(t.begin(),t.end());
                for(int j=0;j<t.size();j++)
                {
                    n[t[j]]=m[s][0];
                    s++;
                }
            return n;
    }
};