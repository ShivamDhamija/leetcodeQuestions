class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> a(256,-1);
        int start=0,i=0,ma=0;
        int size=s.size();
        while(i<size)
        {
            int no=s[i],N=a[no];
            if(N==-1||N<start)
            {
             
                ma=max(ma,i+1-start);
            }
            else if(N>=start)
            {
                start=N;
            }
               a[no]=i+1;
            i++;
        }
        return ma;
    }
};