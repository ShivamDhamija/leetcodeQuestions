class Solution {
public:
    vector<vector<int>>v;
    void call(int no)
    {
        vector<int>v2(32);
        int i=0;
        while(no)
        {
            v2[i]=no&1;
            no=no>>1;
            i++;
        }
        
        v.push_back(v2);
    }
    int largestCombination(vector<int>& c) {
        // v.resize(c.size(),vector<int>(32));
        // for(auto i:c)
        //     call(i);
        int ans=0;
        for(int t=1;t<=10000000;t<<=1)
        {
            // int t=1<<1;
            int con=0;
            for(int i=0;i<c.size();i++)
                con+=(c[i]&t)>0;
            ans=max(ans,con);
        }
        return ans;
    }
};