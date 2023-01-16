class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int g=-1;
        for(int i=a.size()-1;i>=0;i--)
        {
            int t=a[i];
            a[i]=g;
            g=max(g,t);
        }
        return a;
    }
};