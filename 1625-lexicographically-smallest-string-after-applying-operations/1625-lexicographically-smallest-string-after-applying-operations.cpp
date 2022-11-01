class Solution {
    unordered_set<string> visited;
    string ans;
    int a, b;
    int n;
    
    bool isVisited(string s) {
        return visited.find(s) != visited.end();
    }
    
    void visit(string s) {
        ans = min(ans, s);
        visited.insert(s);
    }
    
    string rotate(string s, int x) {
        string t1="",t2="";
        for(int i=0;i<x;i++)
            t1.push_back(s[i]);
        for(int i=x;i<s.size();i++)
            t2.push_back(s[i]);
        s=t2+t1;
        return s;
    }
    
    string add(string s, int x) {
        for (int i=1; i<n; i += 2) {
            char &c = s[i];
            c = '0' + (c-'0'+x)%10;
        }
        return s;
    }
    

public:
    
    void dfs(string s) {
        if (isVisited(s)) {
            return ;
        }
        visit(s);
        dfs(rotate(s, b));
        dfs(add(s, a));
    }
    
    string findLexSmallestString(string s, int a, int b) {
        ans = s;
        this->a = a;
        this->b = b;
        n = s.size();
        dfs(s);
        return ans;
    }
};