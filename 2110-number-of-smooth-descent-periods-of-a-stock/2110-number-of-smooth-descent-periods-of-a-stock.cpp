class Solution {
public:
    long long getDescentPeriods(vector<int>& p) {
        long long ans=0;
        int j=0;
        for(int i=0;i<p.size();i=j+1)
        {
            j=i;
            for(;j<p.size();j++)
            {
                ans+=(j-i+1);
                if(j+1!=p.size()&&(p[j]>p[j+1]+1||p[j]<=p[j+1]))
                    break;
                
            }
            
        }
        
        return ans;
    }
};