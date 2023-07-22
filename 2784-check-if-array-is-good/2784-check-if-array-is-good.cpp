class Solution {
public:
    bool isGood(vector<int>& n) {
        if(n.size()<2)return false;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size()-1;i++)
            if(n[i]!=(i+1))return false;
        if(n[n.size()-1]!=n[n.size()-2])return false;
        return true;
    }
};