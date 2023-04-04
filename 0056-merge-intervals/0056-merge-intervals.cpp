class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        for(auto i:v)
        {
            if(ans.empty()||ans[ans.size()-1][1]<i[0])
                ans.push_back(i);
            else if(ans[ans.size()-1][1]>=i[1])
                continue;
            else
                ans[ans.size()-1][1]=i[1];
        }
        
        return ans;
        
    }
};