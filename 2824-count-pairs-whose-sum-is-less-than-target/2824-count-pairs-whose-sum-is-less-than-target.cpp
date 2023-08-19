class Solution {
public:
    int countPairs(vector<int>& n, int t) {
        
        int a=0;
        for(int i=0;i<n.size();i++)
        {
            for(int j=0;j<i;j++)
                if(n[i]+n[j]<t)a++;
        }
        return a;
    }
};