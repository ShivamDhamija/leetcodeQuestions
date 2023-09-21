class Solution {
public:
    vector<long long> distance(vector<int>& n) {
        vector<long long>a(n.size());
        unordered_map<int,long long>cl,cr,sl,sr;
        for(int i=0;i<n.size();i++)
        {
            int no=n[i];
            a[i]=cl[no]*i-sl[no];
            cl[no]++;
            sl[no]+=i;
        }
        for(int i=n.size()-1;i>=0;i--)
        {
            int no=n[i];
            a[i]+=sr[no]-cr[no]*i;
            cr[no]++;
            sr[no]+=i;
        }
        return a;
    }
};