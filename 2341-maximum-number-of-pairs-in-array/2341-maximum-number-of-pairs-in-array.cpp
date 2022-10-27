class Solution {
public:
    vector<int> numberOfPairs(vector<int>& n) {
        unordered_map<int,int>m;
        for(auto i:n)
            m[i]++;
        int a=0,r=0;
        
        for(auto i:m)
        {
            a+=i.second/2;
            r+=i.second%2;
        }
        return {a,r};
    }
};