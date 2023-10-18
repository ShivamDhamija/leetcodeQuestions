class Solution {
public:
    int minimumOperations(vector<int>& n) {
        unordered_set<int>s;
        for(auto i:n)
            if(i!=0)
                s.insert(i);
        return s.size();
    }
};