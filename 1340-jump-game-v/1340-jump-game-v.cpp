class Solution {
public:
    vector<int>v;
    int call(vector<int>&a,int &d,int i)
    {
        if(i==a.size())return 0;
        if(v[i]!=-1)return v[i];
       
        int ans=1;
        for(int I=i+1;I<=i+d&&I<a.size()&&a[I]<a[i];I++)
            {ans=max(ans,call(a,d,I)+1);}
        for(int I=i-1;I>=i-d&&I>=0&&a[I]<a[i];I--)
            ans=max(ans,call(a,d,I)+1);
        return v[i]=ans;
    }
    int maxJumps(vector<int>& a, int d) {
        v.resize(a.size(),-1);
        int ans=0;
        for(int i=0;i<a.size();i++)
            ans=max(ans,call(a,d,i));
        return ans;
    }
};