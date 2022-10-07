class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        vector<int> a(n+1);
       vector<int> b(n+1);
        
        for(int i=0;i<t.size();i++)
        {
            int x=t[i][0];
            int y=t[i][1];
            a[x]=1;
            b[y]++;
        }
        
        int j=-1;
        for(int i=1;i<=n;i++)
            if(a[i]==0&&b[i]==n-1)
                j=i;
        return j;
    }
};