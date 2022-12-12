class Solution {
public:
    int waysToMakeFair(vector<int>& n) {
        vector<int>e(n.size());
        vector<int>o(n.size());
        for(int i=n.size()-2;i>=0;i--)
        {
            if(i%2==0)
                o[i]=n[i+1];
            else
               e[i]=n[i+1];
            o[i]+=o[i+1];
            e[i]+=e[i+1];
        }
        int E=0,O=0,ans=0;
        for(int i=0;i<n.size();i++)
        {
           // cout<<e[i]<<" "<<E<<" "<<o[i]<<" "<<O<<endl;
            if(o[i]+E==e[i]+O)
                ans++;
            if(i%2==0)
                E+=n[i];
            else
                O+=n[i];
            
            
        }
        return ans;
    }
};