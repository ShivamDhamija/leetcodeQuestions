class Solution {
public:
    void shift(string &s, int i)
    {
        for(int j=i;j<s.size()-1;j++)
            s[j]=s[j+1];
    }
    string orderlyQueue(string t, int k) {
        if(k>1){
            sort(t.begin(),t.end());
            return t;
        }
        string small=t;
         for(int n=0;n<t.size();n++){
             
             char m=t[0];
             int ind=0;
             for(int i=0;i<k;i++)
             {
                 if(m<t[i])
                 {
                     m=t[i];
                     ind=i;
                 }
             }
             shift(t,ind);
             t[t.size()-1]=m;
             
             if(small>t)
                 small=t;
             
         }
        
        return small;
    }
};