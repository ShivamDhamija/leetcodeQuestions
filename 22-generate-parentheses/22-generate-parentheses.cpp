class Solution {
public:
    void roq(vector<string>& v,int l,int r,int i,int n,string s )
    {
        if(i==2*n)
        {v.push_back(s); return ;}
        else if(l==r)
        {
            roq(v,l+1,r,i+1,n,s+"(");
            return ;
        }
        else
        {
            if(l==n)
            {
                roq(v,l,r+1,i+1,n,s+")");
                        return ;
            }
            else
            {
                roq(v,l,r+1,i+1,n,s+")");
                    roq(v,l+1,r,i+1,n,s+"(");
                            return ;
            }
        }
    }
    vector<string> generateParenthesis(int n) {
       int l=0,r=0,i=0;
        vector<string> v;
        string s="";
        roq(v ,l,r,i,n,s);
        return v;
    }
};