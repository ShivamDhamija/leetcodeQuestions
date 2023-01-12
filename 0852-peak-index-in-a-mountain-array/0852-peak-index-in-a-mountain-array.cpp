class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        if(a.size()<3)return-1;
        int i,l=0,r=a.size();
        while(l<r)
        {
            i=(l+r)/2;
           // cout<<a[i];
            if((i==0||a[i]>a[i-1])&&(i==a.size()-1||a[i]>a[i+1]))
                return i;
            if(i==0||a[i]>a[i-1])
                l=i;
            else
                r=i;
            
        }
        return -1;
    }
};