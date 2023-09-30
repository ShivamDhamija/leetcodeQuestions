class Solution {
public:
    int minOperations(vector<int>& n, int k) {
        unordered_set<int>s;
        int c=0,i;
        for( i=n.size()-1;i>=0;i--)
        {
            if(n[i]<=k)
                s.insert(n[i]);
            c++;
            if(s.size()==k)break;
            
        }
        return c;
    }
};