class Solution {
public:
    unordered_map<long long ,long long>v;
        long long call(long long n)
        {
            
            if(n<0)return INT_MAX;
            if(n==0)return 0;
            if(v.find(n)!=v.end())return v[n];
            
             v[n]=min(call(n-2),call(n-3))+1;
            
            return v[n];
        }
    int minimumRounds(vector<int>& t) {
        
        unordered_map<long long ,long long >m;
        
        for(int i=0;i<t.size();i++)
        {
            m[t[i]]++;
        }
        
        long long ans=0;
        
        for(auto i:m)
        {
           // cout<<i.first<<" "<<i.second<<" ";
            long long no=call(i.second);
           // cout<<no<<endl;
            if(no>=INT_MAX)return -1;
            ans+=no;
           // cout<<no<<" "<<ans<<endl;
        }
        
        return ans;
    }
};