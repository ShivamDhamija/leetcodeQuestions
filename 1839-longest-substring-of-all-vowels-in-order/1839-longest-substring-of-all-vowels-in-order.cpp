class Solution {
public:
    int st,ed,no,ans;
    vector<char>v;
    void call(string &w,int &i,int no,int r)
    {
        if(i==w.size())return ;
        if(no==5)no=4;
     if((v[no]!=w[i]&&v[no-1]!=w[i]))
     {
         return;
     }
        //cout<<r<<" ";
        if(w[i]==v[no-1]&&r>no-1)
            return ;
        if(w[i]==v[no]&&no==4)
            ans=max(ans,i-st+1);
        if(w[i]==v[no])
            no++;
        i++;
        if(no>r+1)
            r=no-1;
        call(w,i,no,r);
    }
    int longestBeautifulSubstring(string w) {
        ans=0;
        v={'a','e','i','o','u'};
        for(int i=0;i<w.size();i++)
        {
            if(w[i]=='a')
            {st=i;call(w,i,1,0);i--;}
            if(i<7)
                cout<<w[i]<<" ";
        }
        return ans;
    }
};