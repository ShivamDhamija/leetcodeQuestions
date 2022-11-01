class Solution {
public:
    int numOfMinutes(int n, int he, vector<int>& ma, vector<int>& in) {
        map<int,vector<pair<int,int>>>m;
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++)
        {
            if(m.find(ma[i])==m.end())
                m[ma[i]]=v;
            m[ma[i]].push_back({i,in[i]});
        }
        int ans=0;
        
        queue<pair<int,int>>q;
        q.push({-1,0});
        while(!q.empty())
        {
            pair<int,int>f=q.front();
            q.pop();
            int a=f.first,b=f.second;
            ans=max(ans,b);
            for(auto i:m[a])
            {
                i.second+=b;
                q.push(i);
            }
        }
        
        return ans;
    }
};