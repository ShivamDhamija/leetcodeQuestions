class Solution {
public:
    int maxScore(vector<int>& n) {
        sort(n.begin(),n.end(),greater<int>());
        long long  s=0,a=0;
        for(int i=0;i<n.size();i++)
        {
            s+=n[i];
            if(s>0)
                a++;
        }
        return a;
    }
};