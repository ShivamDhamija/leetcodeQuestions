class Solution {
public:
    int minimumSum(int n, int k) {
        int a=0;
        unordered_set<int>m;
        int i=1;
        while(n)
        {
            if(m.find(k-i)==m.end())
            {
                a+=i;
                m.insert(i);
                n--;
            }
            i++;
        }
        return a;
    }
};