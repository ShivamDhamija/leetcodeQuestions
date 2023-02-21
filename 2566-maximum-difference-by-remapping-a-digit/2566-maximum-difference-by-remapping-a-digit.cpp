class Solution {
public:
    int minMaxDifference(int n) {
        vector<int>ma;
        vector<int>mi;
        while(n>0)
        {
            ma.push_back(n%10);
            mi.push_back(n%10);
            n/=10;
        }
        int a=-1,i=ma.size()-1,s=0;
        while(i>=0)
        {
            if(ma[i]!=9&&a==-1)
            {
                a=ma[i];
                ma[i]=9;
            }
            else if(ma[i]==a)
                ma[i]=9;
            i--;
        }
        a=-1,i=ma.size()-1;
        while(i>=0)
        {
            if(mi[i]!=0&&a==-1)
            {
                a=mi[i];
                mi[i]=0;
            }
            else if(mi[i]==a)
                mi[i]=0;
            ma[i]-=mi[i];
            s=s*10+ma[i];
            i--;
        }
        
        return s;
    }
};