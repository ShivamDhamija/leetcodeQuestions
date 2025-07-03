class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto i:nums)m[i]++;
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>q;
        for(auto i:m){
            if(q.size()<k)q.push({i.second,i.first});
            else if(q.top()[0]>=i.second)continue;
            else {
                q.pop();
                q.push({i.second,i.first});
            }
        }
        vector<int>a;
        while(q.size()!=0){
            a.push_back(q.top()[1]);
            q.pop();
        }
        return a;
    }
};