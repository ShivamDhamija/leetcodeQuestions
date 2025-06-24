// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,r=n,m;
        bool c;
        while(l<r){
            m= l+(r-l)/2;
            c =isBadVersion(m);
            if(c)r=m;
            else l=m+1;
        }
        return l;
    }
};