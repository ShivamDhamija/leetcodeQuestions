class Solution {
public:
    int countWays(vector<int>& n) {
        sort(n.begin(),n.end());
        int s=n[0]>0?1:0;
        for(int i=0;i<n.size();i++)
            if(n[i]<i+1)
                if(i+1==n.size()||(i+1<n[i+1]))
                s++;
        return s;
    }
};

