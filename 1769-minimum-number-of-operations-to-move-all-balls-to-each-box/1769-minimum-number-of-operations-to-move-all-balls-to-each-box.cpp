class Solution {
public:
    vector<int> minOperations(string n) {
        vector<int>a(n.size());
        for(int i=0;i<n.size();i++)
        {
            for(int j=i+1;j<n.size();j++)
            {
                if(n[j]=='1')a[i]+=j-i;
            }
        }
        for(int i=n.size()-1;i>=0;i--)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(n[j]=='1')a[i]+=i-j;
            }
        }
        return a;
    }
};