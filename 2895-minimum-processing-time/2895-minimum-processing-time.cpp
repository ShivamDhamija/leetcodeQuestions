class Solution {
public:
    int minProcessingTime(vector<int>& p, vector<int>& t) {
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        int a=INT_MIN,j=0;
       // cout<<p[0];
        for(int i=0;i<t.size();i++)
        {a=max(a,p[p.size()-1-j]+t[i]);
            if((i+1)%4==0)j++;
        }return a;
    }
};