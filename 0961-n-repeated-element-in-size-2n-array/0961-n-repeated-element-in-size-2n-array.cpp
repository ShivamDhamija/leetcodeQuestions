class Solution {
public:
    int repeatedNTimes(vector<int>& n) {
        for(int i=2;i<n.size();i++)
            if(n[i]==n[i-1]||n[i]==n[i-2])
                return n[i];
        return n[0];
    }
};