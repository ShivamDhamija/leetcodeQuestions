class Solution {
public:
    int ans;
    void call(vector<vector<int>>& s, vector<vector<int>>& m,int i,int j ,int val)
    {
        if(i==s.size())
        {
            ans=max(ans,val);
            return ;
        }
        for(int k=j;k<m.size();k++)
        {
            swap(m[j],m[k]);
            int val2=0;
            for(int l=0;l<s[0].size();l++)
            {
                if(s[i][l]==m[j][l])
                    val2++;
            }
            call(s,m,i+1,j+1,val+val2);
            swap(m[j],m[k]);
        }
    }
    int maxCompatibilitySum(vector<vector<int>>& s, vector<vector<int>>& m) {
        ans=INT_MIN;
        call(s,m,0,0,0);
        
        return ans; 
    }
};