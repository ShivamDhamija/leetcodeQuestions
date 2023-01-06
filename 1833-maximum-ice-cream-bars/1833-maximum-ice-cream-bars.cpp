class Solution {
public:
    int maxIceCream(vector<int>& c, int m) {
        sort(c.begin(),c.end());
        int i=0;
        while(i<c.size()&&m>=c[i])
        {
            m=m-c[i];
            i++;
        }
        return i;
    }
};