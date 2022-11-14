class Solution {
public:

    vector<vector<int>>parent;
    vector<bool>vis;
    void set(int a,int b)
    {
        parent[b].push_back(a);
    }
    bool check(int a,int b)
    {
        if(vis[a])return false;
        
        vis[a]=true;
        int i=0;
        bool ans=false;
        while(i<parent[a].size())
        {
           
            if(parent[a][i]==b)return true;
            ans=ans||check(parent[a][i],b);
            i++;
        }
        
        return ans;
    }
    vector<bool> checkIfPrerequisite(int no, vector<vector<int>>& pr, vector<vector<int>>& q) {
        parent.resize(no,vector<int>());
        vis.resize(no,false);
        for(int i=0;i<no;i++)
           set(i,i);
        
        for(int i=0;i<pr.size();i++)
        {
            int a=pr[i][0],b=pr[i][1];
            set(a,b);
        }
        
        vector<bool>ans;
        
        for(int i=0;i<q.size();i++)
        {
            ans.push_back(check(q[i][1],q[i][0]));            
            for(int j=0;j<no;j++)
                vis[j]=false;
        }
        
        return ans;
    }
};