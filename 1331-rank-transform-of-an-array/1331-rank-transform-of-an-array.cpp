class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        vector<int>c=a;
        sort(c.begin(),c.end());
        unordered_map<int,int>m;
        int d=1;
        for(auto i:c)
        {
            if(m.find(i)==m.end())
            { m[i]=d;
            d++;
            }
        }
        for(int i=0;i<a.size();i++)
            a[i]=m[a[i]];
        return a;
    }
};