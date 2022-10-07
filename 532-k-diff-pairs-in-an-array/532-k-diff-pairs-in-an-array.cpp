class Solution {
public:
    int findPairs(vector<int>& n, int k) {
        unordered_map<int,int>m;
        int ans=0;
        
        for(int i=0;i<n.size();i++)
        {
           m[n[i]]++;
        }
        
        for(auto i:m)
        {
            if(k==0&&i.second>1)
            {
                ans++;
            }
            else if(k!=0&&m.find(i.first+k)!=m.end())
            {
                ans++;
            }
        }
        return ans;
    }
};