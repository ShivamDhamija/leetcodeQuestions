class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            int r=count(s[i].begin(),s[i].end(),' ');
            if(r>c)
                c=r;
        }
        return c+1;
    }
};