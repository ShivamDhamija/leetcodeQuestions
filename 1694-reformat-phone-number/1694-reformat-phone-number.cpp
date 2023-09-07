class Solution {
public:
    string reformatNumber(string v) {
        vector<char>n;
        for(auto i:v)
            if(i != ' ' && i != '-')
                n.push_back(i);
        string s="",c="";
        
        for(int i=0;i<n.size();i++)
        {
            if(c.size()==3)
            {
                s+=c;
                s.push_back('-');
                c="";
            }
            if((n.size()-i) == 4 && c.size()==0)
            {
                s.push_back(n[i++]);
                s.push_back(n[i++]);
                s.push_back('-');
                s.push_back(n[i++]);
                s.push_back(n[i++]);
                c="";
                break;
            }
            c.push_back(n[i]);
        }
        if(c.size()>0)
            s+=c;
        return s;
    }
};