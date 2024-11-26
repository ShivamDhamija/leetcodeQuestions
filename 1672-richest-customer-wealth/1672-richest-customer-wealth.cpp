class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int r=0;
        for(auto i:a){
            int n=0;
            for(auto j:i)n+=j;
            if(r<n)r=n;
        }
        return r;
    }
};