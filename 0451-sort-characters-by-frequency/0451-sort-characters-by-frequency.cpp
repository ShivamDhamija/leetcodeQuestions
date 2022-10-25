class Solution {
public:
    string frequencySort(string s) {
        vector<int>v(256);
        int ma=INT_MIN;
        unordered_map<int,vector<char>>m;
        vector<char>c;
        for(auto i:s)
        {
            v[i]++;
            ma=max(ma,v[i]);
            
        }
        for(int i=0;i<256;i++)
        {
            if(m.find(v[i])==m.end())
                m[v[i]]=c;
            m[v[i]].push_back(i);
        }
        s="";
        
        while(ma)
        {
            
            for(auto i:m[ma])
            {
                int j=ma;
                while(j--)
                {   
                    s+=i;
                }
            }
            ma--;
            while(m.find(ma)==m.end()&&ma>0)
            ma--;
        }
        
        return s;
    }
};