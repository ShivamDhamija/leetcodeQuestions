class Solution {
public:
    vector<int> leftRightDifference(vector<int>& n) {
        int v=0;
        for(auto i:n)v+=i;
        vector<int>a;
        int j=0;
        for(auto i:n){
            v-=i;
            a.push_back(abs(v-j));
            j+=i;
        }
        return a;
    }
};