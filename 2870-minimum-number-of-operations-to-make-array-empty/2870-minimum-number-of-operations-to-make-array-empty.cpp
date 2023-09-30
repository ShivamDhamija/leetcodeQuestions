class Solution {
public:
    int minOperations(vector<int>& n) {
        int res=0;
        unordered_map<int,int>m;
        for(auto i:n)
            m[i]++;
        for(auto i:m)
        {
            int cnt=i.second;
            if (cnt == 1)
            return -1;
        res += cnt / 3 + (cnt % 3 > 0);
            
        }
        return res;
    }
};