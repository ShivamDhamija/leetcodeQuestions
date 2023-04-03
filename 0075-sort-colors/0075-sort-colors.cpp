class Solution {
public:
    void sortColors(vector<int>& n) {
        int a=0,b=n.size()-1,i=0;
        while(i<n.size())
        {
            if(n[i]==0&&a<i)
            {
                while(n[a]==0&&a<i)
                    a++;
                swap(n[i],n[a]);
            }
            else if(n[i]==2&&b>i)
            {
                while(n[b]==2&&b>i)
                    b--;
                swap(n[i],n[b]);
            }   
            else
                i++;
        }
    }
};