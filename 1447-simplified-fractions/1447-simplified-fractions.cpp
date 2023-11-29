class Solution {
public:
    int gcd(int a,int b)
    {
        return __gcd(a,b);        
    }
    void call(int i,int &n,vector<string>&v)
    {
        for(int j=i+1;j<=n;j++)
        if(gcd(i,j)==1)
        {
            string s="";
            s+=to_string(i);
            s.push_back('/');
            s+=to_string(j);
            v.push_back(s);
        }
    }
    vector<string> simplifiedFractions(int n) {
        vector<string>v;
        for(int i=1;i<n;i++)
            call(i,n,v);
        return v;
    }
};