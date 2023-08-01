class Solution {
public:
    bool check(unordered_map<int,int>&a)
    {
        for(auto i:a)
            if(i.second==0)return false;
            return true;
    }
    int countCompleteSubarrays(vector<int>& n) {
        unordered_map<int,int>hash;
        for(auto i:n)
            hash[i]=0;
        int a=0,l=0,r=0;
        while(r<n.size())
        {
            hash[n[r]]++;                          
                while(l<=r&&check(hash))
                {
                    a+=n.size()-r;
                    hash[n[l]]--;
                    l++;
                }                                
                r++;
        }
        return a;
    }
};