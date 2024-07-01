class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
        unordered_set<int>s;
        for(auto i:n){
            if(s.find(i)!=s.end())return true;
            s.insert(i);
        }
        return false;
    }
};