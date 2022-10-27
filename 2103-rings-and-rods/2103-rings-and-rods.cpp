class Solution {
public:
    int countPoints(string r) {
       vector<vector<int>>v(10,vector<int>(3));
        
        for(int i=0;i<r.size();i+=2)
        {
            char a=r[i];
            int b=r[i+1]-'0';
            if(a=='R')
            {
                v[b][0]=1;
            }
            else if(a=='G')
            {
                v[b][1]=1;
            }
            else
            {
                v[b][2]=1;
            }
        }
        int ans=0;
        
        for(int i=0;i<10;i++)
            if(v[i][0]&&v[i][1]&&v[i][2])
                ans++;
        
        return ans;
    }
};