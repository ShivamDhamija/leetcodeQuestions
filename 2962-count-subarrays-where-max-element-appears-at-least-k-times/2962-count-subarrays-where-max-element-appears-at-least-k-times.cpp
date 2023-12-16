class Solution {
public:
    long long countSubarrays(vector<int>& n, int t) {
        int m=0;
        for(auto i:n)m=max(m,i);
        int i=0,c=0;
        long long a=0;
        for(int j=0;j<n.size();j++)
        {
            c+=n[j]==m;
            while(c>=t)
                c-=n[i++]==m;
            a+=i;
        }
            return a;
    }
};