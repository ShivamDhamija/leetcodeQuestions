class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& a) {
        unordered_set<int>s;
        unordered_map<int,vector<int>>v;
        unordered_map<int,bool>f;
            vector<int>ans;
        for(auto i:a)
        {
            int b=i[0],c=i[1];
            if(s.find(b)==s.end())
                s.insert(b);
            else
                s.erase(b);
            if(s.find(c)==s.end())
                s.insert(c);
            else
                s.erase(c);
            f[b]=0;
            f[c]=0;
            v[b].push_back(c);
            v[c].push_back(b);
        }
        int t=*s.begin();
        while(!f[t])
        {
            ans.push_back(t);
           
            if(f[v[t][0]]==false)
            {
                f[t]=1;
                t=v[t][0];
            }
            else if(v[t].size()>1&&f[v[t][1]]==false)
            {
                f[t]=1;
                t=v[t][1];
            }
            else
                break;
            
            
        }
        return ans;
    }
};