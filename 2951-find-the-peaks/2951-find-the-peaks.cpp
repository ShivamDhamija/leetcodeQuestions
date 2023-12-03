class Solution {
public:
    vector<int> findPeaks(vector<int>& m) {
        vector<int>a ;
        for(int i=1;i<m.size()-1;i++)
            if(m[i]>m[i-1]&&m[i]>m[i+1])
                a.push_back(i);
        return a;
    }
};