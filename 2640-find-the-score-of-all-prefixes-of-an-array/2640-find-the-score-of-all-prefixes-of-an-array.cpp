class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& n) {
        vector<long long>a;
        long long l=n[0],s=0;
        for(auto i:n)
        {
            l=l<i?i:l;
            s+=l+i;
            a.push_back(s);
        }
        return a;
    }
};