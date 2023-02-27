class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& n) {
        vector<int>l(n.size(),0);
        vector<int>r(n.size(),0);
        for(int i=n.size()-2;i>=0;i--)
            r[i]=r[i+1]+n[i+1];
        l[0]=r[0];
        int d=n[0];
       // cout<<d<<" ";
        for(int i=1;i<n.size();i++)
        {
           // cout<<r[i]<<" ";
            l[i]=abs(d-r[i]);
                d+=n[i];
         }
        return l;
    }
};