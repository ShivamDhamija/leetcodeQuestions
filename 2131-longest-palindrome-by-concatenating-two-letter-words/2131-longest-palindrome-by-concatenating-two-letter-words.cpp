class Solution {
public:
    bool pal(string s)
    {
        string t=s;
        reverse(s.begin(),s.end());
        return s==t;
    }
    int longestPalindrome(vector<string>& w) {
        unordered_map<string,int>m;
        unordered_map<string,bool>vis;
        for(int i=0;i<w.size();i++)
        {
            m[w[i]]++;
            vis[w[i]]=false;
        }
        int ans=0,a=0;
        for(auto i:m)
        {
            string re=i.first;
            reverse(re.begin(),re.end());
            if(vis.find(re)!=vis.end()&&!vis[re]&&re!=i.first)
            {
                int t=m[re];
                vis[re]=true;
                vis[i.first]=true;
                ans+=min(i.second,t)*4;
            }
            else if(re==i.first)
            {
                if(m[re]%2==0)
                ans+=m[re]*2;
                else 
                {
                    ans+=(m[re]-1)*2;
                     if(!a)
                {ans+=2;a=1;}
                }
                
            }
        }
        return ans;
    }
};