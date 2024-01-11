class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& n) {
        
        int a=0,f=0,d=0;
        for(auto i:n)
        {
            f=i[0]*i[0]+i[1]*i[1];
            if(f>d)
                a=i[0]*i[1],d=f;
            else if(f==d)
                a=max(a,i[0]*i[1]);
            //cout<<a<<" "<<d<<endl;
        }
        return a;
    }
};
