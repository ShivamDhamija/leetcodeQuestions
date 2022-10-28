class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& n, vector<vector<int>>& q) {
        vector<int>ans;
        
        int sum=0;
        for(auto i:n)
        if(i%2==0)
            sum+=i;
        for(int i=0;i<q.size();i++ )
        {
            int v=q[i][0],id=q[i][1];
            if(n[id]%2==0)
                sum-=n[id];
            n[id]+=v;
            if(n[id]%2==0)
                sum+=n[id];
            ans.push_back(sum);
        }
        return ans;
    }
};