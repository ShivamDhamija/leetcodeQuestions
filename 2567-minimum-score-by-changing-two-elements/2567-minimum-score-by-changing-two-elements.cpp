class Solution {
public:
    int minimizeSum(vector<int>& n) {
        sort(n.begin(),n.end());
        return min(n[n.size()-1]-n[2],min(n[n.size()-2]-n[1],n[n.size()-3]-n[0]));
        //return mi;
        // 9 27 33 59 81 
    }
};