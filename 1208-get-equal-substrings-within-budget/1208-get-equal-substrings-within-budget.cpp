class Solution {
public:
    int equalSubstring(string s, string t, int ma) {
        queue<int>st;
        int no=0,j=0,i,ans=0;
        for( i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            {
                int d=abs(s[i]-t[i]);
                st.push(i);
                no+=d;
                while(!st.empty()&&(no>ma))
                {
                    int k=st.front();
                    st.pop();
                    no-=abs(s[k]-t[k]);
                 //   cout<<k<<" ";
                }
                
                if(st.empty())
                    j=i;
                if(!st.empty()&&no<=ma)
                {
                    j=st.front();
                   // cout<<j<<" D< ";
                     ans=max(ans,i-j+1);
                }
            }
            else
                 ans=max(ans,i-j+1);
           
        }
        
        return ans;
    }
};
