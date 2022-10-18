class Solution {
public:
    void change(vector<vector<char>>& b ,int i,int j,int m,int n)
    {
        if(i<0||j<0||i==m||j==n)return ;
        if(b[i][j]=='.')return ;
        
        b[i][j]='.';
        change(b,i+1,j,m,n);
        change(b,i-1,j,m,n);
        change(b,i,j+1,m,n);
        change(b,i,j-1,m,n);
        
    }
    int countBattleships(vector<vector<char>>& b) {
        int ans=0;
        int m=b.size(),n=b[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[i][j]!='.')
                {
                    ans++;
                    change(b,i,j,m,n);
                }
            }
        }
        return ans;
    }
};