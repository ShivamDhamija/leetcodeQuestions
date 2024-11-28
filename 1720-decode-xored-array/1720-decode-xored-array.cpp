class Solution {
public:
    vector<int> decode(vector<int>& e, int f) {
        vector<int>a;
        a.push_back(f);
        for(int i=0;i<e.size();i++){
            a.push_back(a[i]^e[i]);   
        }        
        return a;
    }
};