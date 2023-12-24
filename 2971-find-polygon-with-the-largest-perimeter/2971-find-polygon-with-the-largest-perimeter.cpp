class Solution {
public:
    long long largestPerimeter(vector<int>& n) {
        long long a=0,s=0;
        sort(n.begin(),n.end(),greater<int>());
        for(auto i:n)s+=i;
        for(auto i:n)
        {
            s-=i;
            if(i>=s)
            {
                a++;continue;
            }
            s+=i;
        }
        return n.size()-a>=3?s:-1;
    }
};