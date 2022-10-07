class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        unordered_map<int,int>m;
        int size=0;
        
        for(int i=0;i<e.size();i++)
        {
            int a=e[i][0];
            int b=e[i][1];
            m[a]++;
            m[b]++;
            size=max(size,max(a,b));
        }
        
        for(int i=1;i<=size;i++)
        {
            if(m[i]==size-1)return i;
        }     
        return -1;
    }
};