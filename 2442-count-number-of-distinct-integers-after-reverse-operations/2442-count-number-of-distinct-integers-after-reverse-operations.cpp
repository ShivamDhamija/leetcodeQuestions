class Solution {
public:
    int rev(int a)
    {
        int ans=0;
        while(a)
        {
            ans=ans*10+a%10;
            a=a/10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& n) {
        int si=n.size();
        unordered_set<int>s;
        for(int i=0;i<si;i++)
        {
            int j=rev(n[i]);
            s.insert(j);
            s.insert(n[i]);
            n.push_back(j);
        }
        return s.size();
    }
};