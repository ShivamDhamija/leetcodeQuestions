class Solution {
public:
    string decodeMessage(string k, string m) {
        
        vector<int>v(26,-1);
        int j=0;
        
        for(int i=0;i<k.size();i++)
        {
            if(k[i]==' ')
                continue;
            int l=k[i]-'a';
            if(v[l]==-1)
            {
                v[l]=j;
                j++;
            }
        }
        for(int i=0;i<m.size();i++)
        {
            if(m[i]==' ')
                continue;
            int l=m[i]-'a';
            m[i]=v[l]+'a';
        }
        return m;
    }
};