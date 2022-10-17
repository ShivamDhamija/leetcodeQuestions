class Solution {
public:
    int maxCoins(vector<int>& p) {
        int n=p.size()/3;
        sort(p.begin(),p.end());
        int a=0;
        
        for(int i=n;i<p.size();i+=2)
        {
            a+=p[i];
        }
        
        return a;
    }
};