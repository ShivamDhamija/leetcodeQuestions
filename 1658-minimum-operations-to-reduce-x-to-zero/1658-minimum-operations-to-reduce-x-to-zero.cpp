class Solution {
public:
    int minOperations(vector<int>& n, int x) {
        int s=0,ans=INT_MAX;
        unordered_map<int,int>m;
        m[0]=0;
      
        for(int i=0;i<n.size();i++)
            {s+=n[i];m[s]=i+1;if(s==x)ans=min(ans,i+1);}
        s=0;
        for(int i=n.size()-1;i>=0;i--)
        {
            s+=n[i];
            if(m.find(x-s)!=m.end()&&m[x-s]!=i+1)
                ans=min( ans , (int)(m[x-s]+n.size()-i));
            if(s==x)
                ans=min(ans,(int)(n.size()-i));
        }
        return ans==INT_MAX?-1:ans;
    }
};