class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& wo, char s) {
        vector<string>a;
        string c="";
        for(int j=0;j<wo.size();j++)
        {
            string w=wo[j];
            for(int i=0;i<w.size();i++)
        {
            if(w[i]==s){
                
                if(c.size()!=0)
                a.push_back(c);
                c="";
                continue;
            }
            c.push_back(w[i]);
        }
            if(c.size()!=0)
                a.push_back(c);
                c="";
        }
            return a;
    }
};