class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        int a=0,t=0;
        sort(s.begin(),s.end());
        for(int i=s.size()-1;i>=0&&t+s[i]>0;i--)
        {
            t+=s[i];
            a+=t;
        }
            return a;
    }
};