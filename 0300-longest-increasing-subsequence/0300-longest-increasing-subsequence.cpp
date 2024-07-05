class Solution {
public:
    int lengthOfLIS(vector<int>& n) {
        vector<int>v(n.size(),1);
        int m=1;
        for(int i=1;i<n.size();i++)
        {
            for(int j=0;j<i;j++){
                if(n[i]>n[j])
                {
                    v[i]=max(v[i],v[j]+1);
                    m=max(m,v[i]);
                }
            }
        }
        return m;
    }
};