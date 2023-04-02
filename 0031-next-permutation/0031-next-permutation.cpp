class Solution {
public:
    void nextPermutation(vector<int>& n) {
        int i,j;
        for( i=n.size()-2;i>=0;i--)
        {
           if(n[i]<n[i+1])
               break;
        }
        if(i==-1)
        {reverse(n.begin(),n.end());return ;}
        j=i;
        for(i=n.size()-1;i>j;i--)
            if(n[i]>n[j])
            {swap(n[i],n[j]);break;}
        reverse(n.begin()+j+1,n.end());
            
    }
};
 