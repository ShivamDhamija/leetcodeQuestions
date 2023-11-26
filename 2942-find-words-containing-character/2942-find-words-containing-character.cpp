class Solution {
public:
    vector<int> findWordsContaining(vector<string>& w, char x) {
        vector<int>a;
        for(int i=0;i<w.size();i++)
        {
            for(int j=0;j<w[i].size();j++)
                if(w[i][j]==x)
                {
                    a.push_back(i);break;
                }
        }
        return a;
    }
};