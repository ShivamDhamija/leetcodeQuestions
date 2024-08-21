class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int l=0,r=m[0].size()-1,t=0,b=m.size()-1,d=0;
        vector<int>a;
        while(l<=r&&t<=b)
        {
            if(d==0)
            {
                for(int i=l;i<=r;i++)
                    a.push_back(m[t][i]);
                t++;
            }
            if(d==1)
            {
                for(int i=t;i<=b;i++)
                    a.push_back(m[i][r]);
                r--;
            }
            if(d==2)
            {
                for(int i=r;i>=l;i--)
                    a.push_back(m[b][i]);
                b--;
            }
            if(d==3)
            {
                for(int i=b;i>=t;i--)
                    a.push_back(m[i][l]);
                l++;
            }
            d=(d+1)%4;
        }
        return a;
    }
};