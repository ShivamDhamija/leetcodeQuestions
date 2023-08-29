class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        vector<int>v;
        unordered_map<int,int>m;
        int c=0;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]]++;
            m[b[i]]++;
            if(m[a[i]]==2)
                c++;
            if(m[b[i]]==2)
                c++;
            if(a[i]==b[i])c--;
            v.push_back(c);
        }
        return v;
    }
};