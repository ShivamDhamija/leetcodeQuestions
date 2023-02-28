class Solution {
public:
    vector<int> divisibilityArray(string w, int m) {
        vector<int>v(w.size(),0);
        long long r=0;
        for(int i=0;i<w.size();i++)
        {
            r=r*10+(w[i]-'0');
            r%=m;
            if(r==0)
                v[i]=1;
            
        }
        return v;
    }
};