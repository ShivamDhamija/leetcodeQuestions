class Solution {
public:
    vector<int> pivotArray(vector<int>& n, int p) {
        vector<int>ans;
        vector<int>r;
        int c=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]<p)
                ans.push_back(n[i]);
            else if(n[i]>p)
                r.push_back(n[i]);
            else
                c++;
        }
        for(int i=0;i<c;i++)
            ans.push_back(p);
        for(int i=0;i<r.size();i++)
            ans.push_back(r[i]);
        
        return ans;
    }
};