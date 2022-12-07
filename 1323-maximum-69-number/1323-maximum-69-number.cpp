class Solution {
public:
    int maximum69Number (int n) {
        vector<int>v;
        while(n)
        {
            v.push_back(n%10);
            n=n/10;
        }
        n=0;
        int one=1;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==6&&one)
            {
                v[i]=9;one=0;
            }
            n=n*10+v[i];
        }
        return n;
    }
};