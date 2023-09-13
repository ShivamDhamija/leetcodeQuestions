class Solution {
public:
    int addMinimum(string w) {
        int no=0;
        char c='c';
        for(auto i:w)            
            {
                no+=i<=c;
                c=i;
            }
        return no*3-w.size();   
    }
};
