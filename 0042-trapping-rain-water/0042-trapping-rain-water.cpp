class Solution {
public:
    int trap(vector<int>& height) {
        int a=0,m=0,s=height.size();
        if(s==0)return a;
        vector<int>l(s),r(s);       
        for(int i=0;i<s;i++){
            m=max(m,height[i]);
            l[i]=m;
        }
        m=0;
        for(int i=s-1;i>=0;i--)
        {
            m=max(m,height[i]);
            r[i]=m;
        }
        for(int i=0;i<s;i++){
            a+=min(l[i],r[i])-height[i];
        }
        return a;
    }
};