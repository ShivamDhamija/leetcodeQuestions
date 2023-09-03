class Solution {
public:
    int countSymmetricIntegers(int l, int h) {
        int ans=0;
        for(int i=l;i<=h;i++)
        {
            string s=to_string(i);
            int a=0,b=0;
            if(s.size()%2==0)
            {for(int j=0;j<s.size()/2;j++)
            {
               a+=s[j];
                b+=s[s.size()-1-j];
            }
            if(a==b)ans++;}
        }
        return ans;
    }
};