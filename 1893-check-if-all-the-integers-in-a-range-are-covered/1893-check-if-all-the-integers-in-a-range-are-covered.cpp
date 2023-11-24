class Solution {
public:
    bool isCovered(vector<vector<int>>& r, int l, int ra) {
        unordered_map<int,int>m;
        for(int i=l;i<=ra;i++)
            m[i]=0;
        for(auto i:r)
        {
            for(int j=i[0];j<=i[1];j++)
                m[j]++;
        }
        for(auto i:m)
            if(i.second==0)return false;
        return true;
    }
};