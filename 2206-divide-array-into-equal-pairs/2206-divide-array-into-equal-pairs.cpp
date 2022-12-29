class Solution {
public:
    bool divideArray(vector<int>& n) {
        unordered_map<int,int>m;
        for(auto i:n)
            m[i]++;
        for(auto i:m)
            if(i.second%2!=0)return false;
        return true;
    }
};