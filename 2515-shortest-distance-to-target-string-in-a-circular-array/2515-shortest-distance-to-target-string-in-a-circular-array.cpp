class Solution {
public:
    int closetTarget(vector<string>& w, string t, int ind) {
        int n=w.size();
        int i=(ind+1)%n,count=1,ans=0;
        if(t==w[ind])return 0;
        while(i!=ind)
        {
            if(w[i]==t)
                break;
            count++;
            i=(i+1)%n;
        }
        ans=count;
        i=(ind-1+n)%n;
        count=1;
        while(i!=ind)
        {
            if(w[i]==t)
                break;
            count++;
            i=(i-1+n)%n;
        }
        ans=min(ans,count);
        return ans==n?-1:ans;
    }
};