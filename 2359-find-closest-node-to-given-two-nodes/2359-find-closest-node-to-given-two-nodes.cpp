class Solution {
public:
    void dfs(int a,int b,unordered_map<int,int>&v,vector<int>& e,vector<bool>&vis)
    {
        if(vis[a])return ;
        vis[a]=true;
        v[a]=b;
        if(e[a]==-1)return;
        dfs(e[a],b+1,v,e,vis);
    }
    int closestMeetingNode(vector<int>& e, int n1, int n2) {
       
        unordered_map<int,int>v1;
        unordered_map<int,int>v2;
        vector<bool>vis1(e.size(),false);
        vector<bool>vis2(e.size(),false);
        dfs(n1,0,v1,e,vis1);
        dfs(n2,0,v2,e,vis2);
        
        int mi=INT_MAX;
        int ans=100001;
        for(auto i=v1.begin();i!=v1.end();i++)
        {
            int j=i->first;
            if(v2.find(j)!=v2.end())
            {
                int a=v1[j];
                int b=v2[j];
                if(mi>max(a,b))
                {
                    ans=j;
                    mi=max(a,b);
                }
                else if(mi==max(a,b)&&ans>j)
                    ans=j;
            }
        }
        if(ans==100001)return -1;
            return ans;
    }
};