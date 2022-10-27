class Solution {
public:
    string sortString(string s) {
        int no=s.size();
        
        vector<int>v(26);
        for(auto i:s)
            v[i-'a']++;
        s="";
        while(no)
        {
            for(int i=0;i<26;i++)
            if(v[i]!=0)
            {
                v[i]--;
                no--;
                s+=('a'+i);
            }
            for(int i=25;i>=0;i--)
                if(v[i]!=0)
                {
                    v[i]--;
                    no--;
                    s+=('a'+i);
                }
        }
        return s;
    }
};