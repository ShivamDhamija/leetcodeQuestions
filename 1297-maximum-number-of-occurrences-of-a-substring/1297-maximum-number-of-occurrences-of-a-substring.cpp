class Solution {
public:
    unordered_map<string,int>st;
    unordered_map<char,int>ch;
   
    int no;
    void call(string &s,int i,int j,int ml)
    {
        string ans="";
        for(int k=i;k<j;k++)
        {
            ch[s[k]]++;
            ans.push_back(s[k]);
            if(ch.size()>ml)
            {
                ch.clear();
                return ;
            }
        }
        ch.clear();
       // cout<<ans<<" "<<i<<" "<<j<<endl;
        st[ans]++;
        if(st[ans]>no)
        {
            no=st[ans];
            
        }
    }
    int maxFreq(string s, int ml, int mi ,int ma) {
        no=0;
      
        for(int i=mi;i<=mi;i++)
        {
            for(int j=0;j+i<=s.size();j++)
            {
                call(s,j,j+i,ml);
            }
            
        }
        
        return no;
    }
};