class Solution {
public:
    int countKDifference(vector<int>& n, int k) {
        unordered_map<int,int>m;
        int ans=0;
        
        for(auto i:n)
        {
            m[i]++;
        }
        for(auto i:n)
            if(m.find(i+k)!=m.end())
                ans+=m[i+k];
        return ans;
        
    }
};