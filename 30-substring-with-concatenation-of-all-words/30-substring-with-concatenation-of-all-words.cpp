class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& w) {
        vector<int>v;
        if(s.size()<1||w.size()<1||s.size()<w.size()*w[0].size())
            return v;
        
        unordered_map<string,int>m;
        for(int i=0;i<w.size();i++)
            m[w[i]]++;
        int n=w.size();
        int l=w[0].size();
        for(int i=0;i<=s.size()-n*l;i++)
        {
            unordered_map<string,int>temp;
            for(int j=i;j<i+n*l;j+=l)
            {
                temp[s.substr(j,l)]++;
            }
            int flag=0;
            for(int j=0;j<n;j++)
            {
                if(temp.find(w[j])==temp.end()||temp[w[j]]!=m[w[j]])
                {
                    flag=1;
                    break;
                }
            }
            
            if(flag==0)
                v.push_back(i);
        }
        return v;
    }
};