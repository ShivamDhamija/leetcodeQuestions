class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        int a=1;
        unordered_set<int>s;
        for(auto i:rolls)
        {
            s.insert(i);
            if(s.size()==k)
                a++,s.clear();
        }
        return a;
    }
};