class Solution {
public:
    int splitNum(int n) {
        vector<int>v;
        while(n)
        {
            v.push_back(n%10);
            n/=10;
        }
        int  a=0,b=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(i%2==0)
                a=a*10+v[i];
            else
                b=b*10+v[i];
        }
        return a+b;
    }
};