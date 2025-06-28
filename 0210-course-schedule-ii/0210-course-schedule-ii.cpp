class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>d(numCourses);
        unordered_map<int,vector<int>>m;
        vector<int>a;
        for(auto i:prerequisites){
            d[i[0]]++;
            m[i[1]].push_back(i[0]);
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++)
        if(d[i]==0)q.push(i);
        while(!q.empty()){
            int f=q.front();
            q.pop();
            a.push_back(f);
            for(auto i:m[f]){
                d[i]--;
                if(d[i]==0)q.push(i);
            }
        }
        for(auto i:d)if(i!=0)return {};
        return a;
    }
};