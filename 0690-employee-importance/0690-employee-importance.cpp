/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    unordered_map<int,vector<int>>m;
    unordered_map<int,int>val;
    
    int getImportance(vector<Employee*> e, int id) {
        int ans=0;
        
        for(auto i:e)
        {
            m[i->id]=i->subordinates;
            val[i->id]=i->importance;
        }
        queue<int>q;
        q.push(id);
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            ans+=val[f];
            for(auto i:m[f])
            {
                q.push(i);
            }
        }
        return ans;
    }
};