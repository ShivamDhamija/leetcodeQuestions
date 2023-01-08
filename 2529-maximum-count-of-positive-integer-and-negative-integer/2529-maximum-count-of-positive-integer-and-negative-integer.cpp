class Solution {
public:
    int maximumCount(vector<int>& no) {
        int n=0,p=0;
        for(auto i:no)
            if(i>0)
                p++;
        else if(i<0)
            n++;
        return max(n,p);
    }
};