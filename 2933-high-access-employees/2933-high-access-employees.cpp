class Solution {
public:
    string call(string s)
    {
        int h=(s[0]-'0')*10+(s[1]-'0');
        int m=(s[2]-'0')*10+(s[3]-'0')+60;
        int r=m/60;
        m=m%60;
        if(r>0)
            h++;
        if(h==24)return "2359";
        s="";
        s=to_string(h);
        if(s.size()<2)
            s="0"+s;
        string mm=to_string(m);
        if(mm.size()<2)
            mm="0"+mm;
        s+=mm;
        return s;
    }
    vector<string> findHighAccessEmployees(vector<vector<string>>& a) {
        vector<string>ans;
        vector<string>tmp;
        unordered_map<string,vector<string>>mp;
        for(auto i:a)
        {
            if(mp.find(i[0])==mp.end())
                mp[i[0]]=tmp;
            mp[i[0]].push_back(i[1]);
        }
        for(auto i:mp)
        {
            sort(i.second.begin(),i.second.end());
            tmp=i.second;
            for(int  j=0;j<tmp.size();j++)
            {
                string g=call(tmp[j]);
                //cout<<i.first<<" "<<tmp[j]<<" "<<g<<endl;
                if(j+2<tmp.size()&&tmp[j+2]<g)
                {
                    
                    ans.push_back(i.first);
                   break;
                }
            }
        }
        
        return ans; 
    }
};