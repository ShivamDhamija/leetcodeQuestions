class Solution {
public:
    int similarPairs(vector<string>& w) {
        vector<vector<int>>v(w.size(),vector<int>(26));
        for(int i=0;i<w.size();i++)
        {
            for(int j=0;j<w[i].size();j++)
            {
                v[i][w[i][j]-'a']=1;
            }
                
        }
        int ans=0;
        for(int i=0;i<w.size();i++)
        {
            for(int j=i+1;j<w.size();j++)
            {
                if(v[i]==v[j])
                    ans++;
            }
        }
            
    return ans;
    }
};