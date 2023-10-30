class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int n) {
        int a=0;
            for(int i=0;i<c.size();i++)
            {
                c[i]=c[i]-r[i];
            }
        sort(c.begin(),c.end());
        for(auto i:c)
        {
            n-=i;
            if(n<0)break;
            a++;
        }
            return a;
    }
};