class Solution {
public:
    bool canSplitArray(vector<int>& n, int m) {
        if(n.size()<=2)return true;
        for(int i=0;i<n.size()-1;i++)
            if(n[i]+n[i+1]>=m)return true;
        return false;
    }
};