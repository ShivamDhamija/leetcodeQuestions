class Solution {
public:
    vector<int> findOrder(int no, vector<vector<int>>& p) {
        vector<int>ans;
       
        vector<vector<int>>v(no);
        vector<int>count(no);
        
        for(int i=0;i<p.size();i++)
        {
            int a=p[i][0];
            int b=p[i][1];
            v[b].push_back(a);
            count[a]++;
        } 
        queue<int>q;
        for(int i=0;i<no;i++)
        {
            if(count[i]==0)
                q.push(i);
        }
        
        while(!q.empty())
        {
            int i=q.front();
            q.pop();
            ans.push_back(i);
            for(auto j:v[i])
            {
                count[j]--;
                if(count[j]==0)
                    q.push(j);
            }
        }
        vector<int> ans2;
        if(ans.size()!=no)return ans2;
        return ans;
    }
};