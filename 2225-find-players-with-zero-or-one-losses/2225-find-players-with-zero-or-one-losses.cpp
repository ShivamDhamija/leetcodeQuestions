class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        set<int>s;
        unordered_map<int,int>l;
        for(int i=0;i<m.size();i++)
        {
            int a=m[i][0],b=m[i][1];
            s.insert(a);
            s.insert(b);
            l[b]++;
        }
        vector<int>a;
        vector<int>b;
        vector<vector<int>>ans;
        
        for(auto i:s)
        {
            if(l[i]==0)
                a.push_back(i);
            else if(l[i]==1)
                b.push_back(i);
        }
        
        
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};