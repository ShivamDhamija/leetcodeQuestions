class Solution {
public:
   /* bool check(int a[26],int ar[26])
    {
        for(int i=0;i<26;i++)
            if(a[i]!=ar[i])
                return false;
        return true;
    }*/
    bool checkInclusion(string s1, string s2) {
        int  n=s1.size(),N=s2.size();
        if(n>N)
            return false;
        int a[26]={0};
        
        for(int i=0;i<n;i++)
        {
            a[s1[i]-'a']++;
            //cout<<a[s1[i]-'a']<<endl;
        }
        int c=0;
        for(int i=0;i<26;i++)
        {
            if(a[i]>0)
                c++;
        }
        int ar[26]={0},d=0;
        
        for(int i=0;i<n;i++)
        {
         int j=s2[i]-'a';
         if(ar[j]==a[j]&&a[j]>0)
             d--;
            if(a[j]>0)
            ar[j]++;

         if(ar[j]==a[j]&&a[j]>0)
             d++;
        }
       /* if(check(a,ar))
            return true;
        */
        if(d==c)
            return true;
        
        for(int i=n;i<N;i++)
        {
            int p=s2[i-n]-'a';
            int ne=s2[i]-'a';
           if(ar[p]==a[p]&&a[p]>0)
                d--;
            
            if(a[p]>0)
            ar[p]--;
            if(ar[p]==a[p]&&a[p]>0)
                d++;
            
            if(ar[ne]==a[ne]&&a[ne]>0)
                d--;
            
            if(a[ne]>0)
            ar[ne]++;
            if(ar[ne]==a[ne]&&a[ne]>0)
                d++;
            if(d==c)
            return true;
            /*
            if(check(a,ar))
                return true;
                */
        }
        if(d==c)
            return true;
        return false;
    }
};