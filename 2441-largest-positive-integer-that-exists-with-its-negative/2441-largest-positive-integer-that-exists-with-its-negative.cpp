class Solution {
public:
    int findMaxK(vector<int>& n) {
        unordered_set<int>s;
        int a=-1;
        for(auto i:n)
        {
            if(s.find(-i)!=s.end())
            {
                a=max(a,abs(i));
            }
            s.insert(i);           
        }
        return a;
    }
};