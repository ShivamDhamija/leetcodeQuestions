class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& n1, vector<vector<int>>& n2) {
        unordered_map<int,int>m;
        vector<vector<int>>ans;
        int ma=0;
        for(auto i:n1)
        {
            m[i[0]]+=i[1];
            ma=max(ma,i[0]);
        }
        for(auto i:n2)
        {
            m[i[0]]+=i[1];
            ma=max(ma,i[0]);
        }
        for(int i=1;i<=ma;i++)
        {
            if(m[i]!=0)
            ans.push_back({i,m[i]});
        }
        return ans;
    }
};