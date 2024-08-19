class Solution {
public:   
    vector<int> topKFrequent(vector<int>& n, int k) {
       unordered_map<int,int>m;
       priority_queue<vector<int>,vector<vector<int>> >p;
        for(auto i:n)        
            m[i]++;           
        for(auto i:m)
            p.push({i.second,i.first});
        vector<int>a;
        while(k--)
        {
            a.push_back(p.top()[1]);
            p.pop();
        }
        return a;
    }
    
};