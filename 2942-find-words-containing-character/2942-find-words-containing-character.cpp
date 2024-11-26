class Solution {
public:
    vector<int> findWordsContaining(vector<string>& w, char x) {
        vector<int>v;
        for(int i=0;i<w.size();i++){
            for(auto j:w[i]){
                if(x==j){
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};