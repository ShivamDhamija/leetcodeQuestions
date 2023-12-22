class Solution {
public:
    int minNumberOperations(vector<int>& t) {
        int a=t[0];
        for(int i=1;i<t.size();i++)
            if(t[i]>t[i-1])
            {
                a+=t[i]-t[i-1];
            }
            
        return a;
    }
};