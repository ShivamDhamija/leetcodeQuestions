class Solution {
public:
    int alternatingSubarray(vector<int>& n) {
        int ans=1,a=1,ne=1;
        for(int i=1;i<n.size();i++)
        {
            if(n[i]-n[i-1]==1)
            {
                if(ne)
                { ne=0;a++;}
                else
                    a=2;
            }
            else if(n[i]-n[i-1]==-1)
            {
                if(!ne)
                {ne=1;a++;}
                else
                {a=1;ne=1;}
            }
            else
            {a=1,ne=1;}
            ans=max(ans,a);
        }
        return ans>1?ans:-1;
        
    }
};