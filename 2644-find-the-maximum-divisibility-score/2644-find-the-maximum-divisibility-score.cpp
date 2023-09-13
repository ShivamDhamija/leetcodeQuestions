class Solution {
public:
    int maxDivScore(vector<int>& n, vector<int>& d) {
        sort(d.begin(),d.end());
        int m=d[0],t=0;
        for(int i=0;i<d.size();i++)
        {
            int no=0;
            for(int j=0;j<n.size();j++)
                if(n[j]%d[i]==0)
                    no++;
            if(no>t)
            {
                t=no;
                m=d[i];
            }
        }
        return m;
    }
};