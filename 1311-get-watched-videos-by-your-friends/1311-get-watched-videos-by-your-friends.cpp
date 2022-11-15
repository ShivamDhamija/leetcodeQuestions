class Solution {
public:
    vector<string> watchedVideosByFriends(vector<vector<string>>& wt, vector<vector<int>>& fr, int id, int level) {
        unordered_map<string,int>st;
        
        
        queue<pair<int,int>>q;
        vector<bool>vis(wt.size(),false);
        q.push({id,0});
        
        while(!q.empty())
        {
            pair<int,int>f=q.front();q.pop();
            int a=f.first,b=f.second;
            if(vis[a])continue;
            vis[a]=true;
            if(b==level)
            {
                for(auto i:wt[a])
                    st[i]++;
            }
             if(b>=level)
                continue;
            b++;
            for(auto i:fr[a])
                q.push({i,b});
        }
        
        
        vector<pair<int,string>>ans;
        
        for(auto i:st)
            ans.push_back({i.second,i.first});
        sort(ans.begin(),ans.end());
        vector<string>ans2;
        
        for(auto i:ans)
            ans2.push_back(i.second);
        
        return ans2;
        
    }
};