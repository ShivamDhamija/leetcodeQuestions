class Solution {
public:
    vector<int> numberGame(vector<int>& n) {
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();i+=2)
            swap(n[i],n[i+1]);
        return n;
    }
};