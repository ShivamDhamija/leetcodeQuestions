class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int>v =h;
        sort(v.begin(),v.end());
        int s=0;
        for(int i=0;i<h.size();i++)
            if(h[i]!=v[i])
                s++;
        return s;
    }
};