class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& n) {
        vector<int>a;
        for(auto i:n){
            int c=0;
            for(auto j:n)if(i>j)c++;
            a.push_back(c);
        }
        return a;
    }
};