class Solution {
public:
    bool isIsomorphic(string p, string w) {
        vector<char>c1(256,NULL);
        vector<char>c2(256,NULL);
        
        for(int i=0;i<p.size();i++)
        {
            int a=p[i],b=w[i];
            if(c1[a]==NULL)
                c1[a]=w[i];
            if(c2[b]==NULL)
                c2[b]=p[i];
            if(c1[a]!=w[i]||c2[b]!=p[i])return false;
        }
        
        return true;
    }
};