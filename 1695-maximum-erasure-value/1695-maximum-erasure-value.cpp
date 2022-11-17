class Solution {
public:
    
    int maximumUniqueSubarray(vector<int>& n) {
        vector<int>pr(n.size()+1);
        for(int i=0;i<n.size();i++)
        {
            pr[i+1]=pr[i]+n[i];
            
        }
        int ans=0,I=0,J=1;
        unordered_map<int,int>m;
        
        for(int i=0;i<n.size();i++)
        {
            if(m.find(n[i])==m.end())
            {
                m[n[i]]=i;
                J=i+1;
                ans=max(ans, pr[J]- pr[I]);
            }
            else
            {
                if(I<m[n[i]]+1)
                I=m[n[i]]+1;
                m[n[i]]=i;
                J=i+1;
                ans=max(ans,pr[J]-pr[I]);
            }
        }
        
        return ans;
    }
};