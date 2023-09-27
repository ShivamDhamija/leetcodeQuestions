class Solution {
public:
    int minNumber(vector<int>& n1, vector<int>& n2) {
        map<int,int>m1;
        map<int,int>m2;
        for(auto i:n1)m1[i]++;
        for(auto i:n2)m2[i]++;
        int a=m1.begin()->first;
        a=a*10+m2.begin()->first;
        int c1=INT_MAX,c2=INT_MAX;
        for(auto i:m1)
            if(m2.find(i.first)!=m2.end())
            {
                c1=i.first;break;
            }
        for(auto i:m2)
            if(m1.find(i.first)!=m1.end())
            {
                c2=i.first;break;
            }        
        if(c1!=INT_MAX||c2!=INT_MAX)return min(c1,c2);
            int r=(a%10)*10+a/10;
        return min(r,a);
    }
};