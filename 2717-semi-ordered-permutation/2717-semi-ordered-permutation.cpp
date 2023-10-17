class Solution {
public:
    int semiOrderedPermutation(vector<int>& n) {
        int o,l;
        for(int i=0;i<n.size();i++)
            if(n[i]==1)
            {
                o=i;break;
            }
        for(int i=0;i<n.size();i++)
            if(n[i]==n.size())
            {
                l=i;break;
            }
        int a=o+n.size()-l-1;
        if(l<o)a--;
        return a;
        
    }
};