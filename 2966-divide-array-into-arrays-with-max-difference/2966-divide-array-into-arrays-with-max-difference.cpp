class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        vector<vector<int>>a;
        vector<int>t;
        for(int i=0;i<n.size();i+=3)
        {
            if((n[i+1]>n[i]+k)||(n[i+1]+k)<n[i+2]||(n[i+2]>n[i]+k))
                return {};
            t={};            
            for(int j=i;j<i+3;j++)
                t.push_back(n[j]);
            a.push_back(t);
        }
        return a;
    }
};