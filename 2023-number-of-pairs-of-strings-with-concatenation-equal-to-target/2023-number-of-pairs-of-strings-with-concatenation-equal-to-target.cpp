class Solution {
public:
    int numOfPairs(vector<string>& n, string t) {
        int a=0;
        
        for(int i=0;i<n.size();i++)
        {
            for(int j=0;j<n.size();j++)
                if(i!=j)
                {
                    if(n[i]+n[j]==t)
                        a++;
                }
        }
        
        return a;
    }
};