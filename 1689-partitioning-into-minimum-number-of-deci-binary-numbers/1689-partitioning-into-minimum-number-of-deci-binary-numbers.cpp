class Solution {
public:
    int minPartitions(string n) {
        int a=0;
        for(int i=0;i<n.size();i++)
        {
            a=max(a,n[i]-'0');
        }
        return a;
    }
};