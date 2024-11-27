class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        vector<bool>v;
        int n=c[0];
        for(auto i:c)n=max(n,i);
        for(auto i:c){
            if(i+e>=n)v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};