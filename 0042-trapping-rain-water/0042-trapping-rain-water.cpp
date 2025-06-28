class Solution {
public:
    int trap(vector<int>& height) {
        int a=0,m=0;
        vector<int>l;
        for(auto i:height){
            m=max(i,m);
            l.push_back(m);
        }
        m=0;
        for(int i=height.size()-1;i>=0;i--){
            m=max(m,height[i]);
            a+=min(m,l[i])-height[i];
        }
        return a;
    }
};