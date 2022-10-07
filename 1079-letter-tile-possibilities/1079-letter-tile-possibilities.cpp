class Solution {
public:
    int find(string s)
    {
         //cout<<s<<" "<<s.size()<<endl;
        int fac[8]={1,1,2,6,24,120,720,5040};
        int si=s.size(),no;
        int a[26]={0};
        no=fac[si];
        for(int i=0;i<si;i++)
        {
            //cout<<i<<endl;
           a[s[i]-'A']++;
            no/=a[s[i]-'A'];
        }
        
        return no;
    }
    void call(string &s,int i,int &count,string &t,int &n){
        
            if(s.size()>0)
            count+=find(s);
        if(i==n)
        {
           
            return ;
        }
        int vis[26]={0};
        for(int j=i;j<n;j++)
        {
            int ind=t[j]-'A';
            if(vis[ind]==0)
            {
                vis[ind]=1;
                s.push_back(t[j]);
                call(s,j+1,count,t,n);
                s.pop_back();
              
                
            }
        }
    }
    int numTilePossibilities(string t) {
       int count=0,n=t.size();
        sort(t.begin(),t.end());
        string s="";
        int i=0;
        call(s,i,count,t,n);
        return count;
    }
};