class Solution {
public:
    vector<int> buildArray(vector<int>& n) {
        vector<int>v;
        for(int i=0;i<n.size();i++){
            v.push_back(n[n[i]]);
        }
        return v;
    }
};