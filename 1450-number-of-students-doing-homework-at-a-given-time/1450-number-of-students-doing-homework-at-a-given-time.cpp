class Solution {
public:
    int busyStudent(vector<int>& s, vector<int>& e, int q) {
        int a=0;
        for(int i=0;i<s.size();i++)
            if(s[i]<=q&&e[i]>=q)a++;        
        return a;
    }
};