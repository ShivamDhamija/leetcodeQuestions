class Solution {
public:
    vector<int> applyOperations(vector<int>& n) {
        vector<int>a;
        for(int i=0;i<n.size()-1;i++)
        {
            if(n[i]==n[i+1]&&n[i]!=0)
            {
                a.push_back(n[i]*2);
                n[i+1]=0;
            }
            else if(n[i]!=0)
                a.push_back(n[i]);
        }
        a.push_back(n[n.size()-1]);
        while(a.size()<n.size())
            a.push_back(0);
        return a;
    }
};