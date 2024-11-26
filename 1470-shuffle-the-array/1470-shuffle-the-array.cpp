class Solution {
public:
    vector<int> shuffle(vector<int>& n, int no) {
        vector<int>v;
        for(int i=0;i<no;i++)
        {
            v.push_back(n[i]);
            v.push_back(n[i+no]);
        }
        return v;
    }
};