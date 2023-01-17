class Solution {
public:
    vector<int> findLonely(vector<int>& n) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(auto i:n)
            m[i]++;
        for(auto i:n)
            if(m[i]==1&&m[i-1]==0&&m[i+1]==0)
                ans.push_back(i);
        return ans;
        
    }
};