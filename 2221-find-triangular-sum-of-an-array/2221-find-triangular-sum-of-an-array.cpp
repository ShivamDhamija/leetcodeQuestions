class Solution {
public:
    int triangularSum(vector<int>& n) {
        if(n.size()==0)return -1;
        while(n.size()>1)
        {
            vector<int>v;
            for(int i=1;i<n.size();i++)
                v.push_back((n[i-1]+n[i])%10);
            
            n=v;
        }
        return n[0];
    }
};