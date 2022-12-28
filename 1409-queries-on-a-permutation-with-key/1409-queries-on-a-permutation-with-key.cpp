class Solution {
public:
    vector<int> processQueries(vector<int>& q, int m) {
        vector<int>ans;
        vector<int>p;
        for(int i=1;i<=m;i++)p.push_back(i);
        for(int i=0;i<q.size();i++)
        {
            int no=q[i],j;
            for( j=0;j<m;j++)
                if(p[j]==no)break;
            for(int k=j;k>0;k--)
                p[k]=p[k-1];
            p[0]=no;
            ans.push_back(j);
        }
        return ans;
    }
};