class Solution {
public:
    string convertToTitle(int c) {
        // c--;
        string a="";
        while(c)
        {
            int r=c%26;
             c=c/26;
            
           // cout<<r<<" "<<c<<endl;
               if(r==0)
                   {a.push_back('Z');c--;}
               else
            a.push_back('A'+r-1);}
        
        reverse(a.begin(),a.end());
        return a;    
    }
};