class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>v;
        int s=0;
        while(n>0)
        {
             v.push_back(n%10);
            n/=10;
        }
        for(int i=v.size()-1;i>=0;i-=2)
        {
            s+=v[i];
        }
        for(int i=v.size()-2;i>=0;i-=2)
        {
            s-=v[i];
        }
        
        return s;
    }
};