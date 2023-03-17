class Solution {
public:
    bool findSubarrays(vector<int>& n) {
        int s=0;
        set<int>m;
        s+=n[1]+n[0];
        for(int i=2;i<n.size();i++)
        {
            m.insert(s);
            s-=n[i-2];
            s+=n[i];
            if(m.find(s)!=m.end())return 1;
        }
        return 0;
    }
};