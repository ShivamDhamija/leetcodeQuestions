class Solution {
public:
    int numIdenticalPairs(vector<int>& n) {
        unordered_map<int,int>v;
        int a=0;
        for(auto i:n){
            v[i]++;
            a+=v[i]-1;
        }
        return a;
    }
};