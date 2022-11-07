class Solution {
public:
    int countCollisions(string d) {
        int l=0,r=0,s=0;
        
        for(int i=0;i<d.size();i++)
        if(d[i]!='L')
        break;
        else
        l++;
        for(int i=d.size()-1;i>=0;i--)
        if(d[i]!='R')
        break;
        else
        r++;
        for(int i=d.size()-1;i>=0;i--)
        if(d[i]=='S')
        s++;
        return d.size()-(l+r+s);
    }
};