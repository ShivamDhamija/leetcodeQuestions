class Solution {
public:
    int val(int i)
    {
        if(i==0)return 1;
        int s=0;
        if(i<0)
            s++,i=-i;
        while(i>0)
            s++,i=i/10;
        return s;
    }
    vector<int> findColumnWidth(vector<vector<int>>& g) {
        vector<int>a;
        for(int j=0;j<g[0].size();j++)
        {
            int s=0;
            for(int i=0;i<g.size();i++)
                s=max(s,val(g[i][j]));
            a.push_back(s);
        }
        return a;
    }
};