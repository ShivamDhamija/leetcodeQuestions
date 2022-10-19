class Solution {
public:
    int numJewelsInStones(string j, string s) {
        vector<int>v(256);
        for(auto i:j)
        {
            v[i]=1;
        }
        
        for(auto i:s)
        {
            if(v[i]>0)
                v[i]++;
        }
        int ans=0;
         for(auto i:v)
             if(i>0)
             {
                 ans+=i-1;
             }
        return ans;
    }
};