class Solution {
public:
    int maxDepth(string s) {
        int m=0,a=0;
        for(auto i:s){
            if(i=='(')a++;
            else if(i==')')a--;
            m=max(m,a);
        }
        return m;
    }
};