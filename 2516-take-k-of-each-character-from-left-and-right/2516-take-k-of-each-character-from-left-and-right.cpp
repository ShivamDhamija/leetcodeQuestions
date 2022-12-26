class Solution {
public:
    int takeCharacters(string s, int k) {
        int ca=0,cb=0,cc=0;
        int n=s.size();
        int ans=n;
        for(int i=0;i<n;i++){
            if(s[i]=='a') ca++;
            if(s[i]=='b') cb++;
            if(s[i]=='c') cc++;
        }
        if(ca<k||cb<k||cc<k) return -1;
        int lo=n-1,hi=n-1;
        while(lo>=0){
            if(s[lo]=='a') ca--;
            if(s[lo]=='b') cb--;
            if(s[lo]=='c') cc--;
            while(ca<k||cb<k||cc<k){
            if(s[hi]=='a') ca++;
            if(s[hi]=='b') cb++;
            if(s[hi]=='c') cc++;
                hi--;
            }
            ans=min(ans,n-(hi-lo+1)); 
            lo--;
        }
        return ans;
    }
};