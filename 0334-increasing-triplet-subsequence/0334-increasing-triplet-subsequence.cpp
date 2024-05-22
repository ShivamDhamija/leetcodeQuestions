class Solution {
public:
    bool increasingTriplet(vector<int>& n) {
        vector<bool>v(n.size(),false);
        int c=n[n.size()-1];
        for(int i=n.size()-2;i>=0;i--)
        {
            if(n[i]<c)v[i]=true;
            c=max(c,n[i]);
        }
        c=n[0];
        for(int i=1;i<n.size();i++)
        {
            if(n[i]>c&&v[i])return true;
            c=min(c,n[i]);
        }
        return false;
    }
};