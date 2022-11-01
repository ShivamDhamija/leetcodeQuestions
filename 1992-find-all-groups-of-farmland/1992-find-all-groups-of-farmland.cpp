class Solution {
public:
    
    void find(vector<vector<int>>& l,int &i,int & j,int a,int b)
    {
        if(a<0||b<0||a>=l.size()||b>=l[0].size()||l[a][b]==0)
            return ;
        i=max(i,a);
        j=max(j,b);
        l[a][b]=0;
        find(l,i,j,a+1,b);
        find(l,i,j,a-1,b);
        find(l,i,j,a,b+1);
        find(l,i,j,a,b-1);
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& l) {
       vector<vector<int>>ans;
        
        int n=l.size(),m=l[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(l[i][j])
                {
                    int I=i,J=j;
                    
                    find(l,I,J,i,j);
                    
                    ans.push_back({i,j,I,J});
                }
        }
        
        return ans;
    }
};