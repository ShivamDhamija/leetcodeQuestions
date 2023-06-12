class Solution {
public:
    int findNonMinOrMax(vector<int>& n) {
        int mi=INT_MAX,ma=INT_MIN;
        
        for(auto i:n)
        {
            if(i>ma)
                ma=i;
            if(i<mi)
                mi=i;
        }
        for(auto i:n)
            if(i!=ma&&i!=mi)return i;
        return -1;
    }
};