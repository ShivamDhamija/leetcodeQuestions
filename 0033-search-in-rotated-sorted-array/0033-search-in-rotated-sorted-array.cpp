class Solution {
public:
    int call(vector<int>&n, int t,int l,int h)
    {
        while(l<=h)
        {
            int m=(h+l)/2;
            if(n[m]<t)
                l=m+1;
            else
                h=m-1;
        }
        return n[l]==t?l:-1;
    }
    int search(vector<int>& n, int t) {
        int l=0, h=n.size()-1;
        int no=n.size()-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(m>0&&n[m]<n[m-1])
            {
                l=m;break;
            }
            if(n[m]>n[h])
                l=m+1;
            else
                h=m-1;
        }
       //  cout<<l;
        if(n[l]<=t&&n[no]>=t)
            return call(n,t,l,no);
        else if(l>0)
            return call(n,t,0,l-1);
       
        return -1;
    }
};