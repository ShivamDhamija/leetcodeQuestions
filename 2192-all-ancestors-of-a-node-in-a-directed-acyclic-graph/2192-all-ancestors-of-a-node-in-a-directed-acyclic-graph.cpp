class Solution {
public:
    unordered_map<int,vector<int>>m;
    unordered_map<int,set<int>>s;
    unordered_map<int,int>count;
    vector<int>v;
    queue<int>q;
    set<int>se;
    vector<vector<int>>ans;
    
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& ed) {
        
        for(int i=0;i<ed.size();i++)
        {
            int a=ed[i][0],b=ed[i][1];
            if(m.find(a)==m.end())
            {
                m[a]=v;
                s[a]=se;
            }
            if(m.find(b)==m.end())
            {
                m[b]=v;
                s[b]=se;
            }
            m[a].push_back(b);
            count[b]++;
        }
            
        for(int i=0;i<n;i++)
        {
            if(count[i]==0)
                q.push(i);
        }
    
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
                for(auto i:m[f])
            {
                count[i]--;
                if(count[i]==0)
                    q.push(i);
                s[i].insert(f);
                for(auto j:s[f])
                    s[i].insert(j);
                
            }
        }
        
        ans.resize(n,vector<int>());
        for(int i=0;i<n;i++)
        {
            for(auto j:s[i])
                ans[i].push_back(j);
        }
        
        return ans;
    }
};