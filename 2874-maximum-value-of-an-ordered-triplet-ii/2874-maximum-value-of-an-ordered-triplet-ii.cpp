class Solution {
public:
    long long maximumTripletValue(vector<int>& n) {
        long long ans=0;int a=0,b=0;
        for(auto i:n)
        {
             ans=ans<(long long)b*i?(long long)b*i:ans;            
            b=max(b,a-i);
            a=max(a,i);
        }
        return ans;
    }
};