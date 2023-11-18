class Solution {
public:
    unordered_map<int,queue<int>>mp;
    queue<int>v;
    Solution(vector<int>& n) {
        for(int i=0;i<n.size();i++)
        {
            if(mp.find(n[i])==mp.end())
                mp[n[i]]=v;
            mp[n[i]].push(i);
        }
    }
    
    int pick(int i) {
        int r=mp[i].front();
        mp[i].pop();
        mp[i].push(r);
        return r;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */