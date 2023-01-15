class Solution {
public:
    long long countGood(vector<int>& n, int k) {
        unordered_map<int,int>m;
    long long ans=0,count=0;
        
        for(int i=0,j=0;j<n.size();j++)
        {
            count+=m[n[j]];
            m[n[j]]++;
            while(count>=k)
            {
                m[n[i]]--;
                count-=m[n[i]];
                i+=1;
            }
            ans+=i;
        }
        return ans;
    }
};