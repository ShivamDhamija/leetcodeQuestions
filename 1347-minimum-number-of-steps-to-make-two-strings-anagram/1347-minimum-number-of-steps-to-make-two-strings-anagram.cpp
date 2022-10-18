class Solution {
public:
    int minSteps(string s, string t) {
        stack<int>ne;
        stack<int>po;
        vector<int>v(26);
        for(int i=0;i<t.size();i++)
            v[t[i]-'a']++;
        for(int i=0;i<t.size();i++)
            v[s[i]-'a']--;
        
        for(int i=0;i<26;i++)
        {
            if(v[i]<0)
            {
                ne.push(i);
                v[i]=-v[i];
            }
             if(v[i]>0)
                po.push(i);
        }
        int ans=0;
        while(!po.empty()&&!ne.empty())
        {
            int f=po.top();
            while(v[f]>0&&!ne.empty())
            {
                int f1=ne.top();
                int d=v[f]-v[f1];
                if(d==0)
                {
                    ans+=v[f];
                    v[f]=0;
                    ne.pop();
                    v[f1]=0;
                    
                }
                else if(d>0)
                {
                    ans+=v[f1];
                    v[f]=v[f]-v[f1];
                    v[f1]=0;
                    ne.pop();
                }
                else
                {
                    ans+=v[f];
                    v[f1]=v[f1]-v[f];
                    v[f]=0;
                }
                    
            }
            po.pop();
                
        }
        return ans;
    }
};