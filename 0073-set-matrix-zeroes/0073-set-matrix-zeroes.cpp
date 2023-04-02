class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int n=m.size(),ma=m[0].size();
        vector<int>r(n,-1);
        vector<int>c(ma,-1);
        for(int i=0;i<n;i++)
            for(int j=0;j<ma;j++)
                if(m[i][j]==0)
                {  
                    r[i]=0;
                    c[j]=0;
                }
        
        for(int i=0;i<n;i++)
            if(r[i]==0)
            for(int j=0;j<ma;j++)
                m[i][j]=0;
            
        for(int j=0;j<ma;j++)
            if(c[j]==0)
            for(int i=0;i<n;i++)
                m[i][j]=0;
        
    }
};