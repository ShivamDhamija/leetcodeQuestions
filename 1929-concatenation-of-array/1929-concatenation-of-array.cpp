class Solution {
public:
    vector<int> getConcatenation(vector<int>& n) {
       int b=n.size();
        for(int i=0;i<b;i++){
            n.push_back(n[i]);
        }
            return n;
    }
};