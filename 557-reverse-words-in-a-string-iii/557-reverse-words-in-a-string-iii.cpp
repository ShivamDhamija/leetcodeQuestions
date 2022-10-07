class Solution {
public:
    string reverseWords(string s) {
        s+=' ';
        queue<string>q;
        string t="";
        for(auto i:s)
        {
            if(i==' ')
            {
                reverse(t.begin(),t.end());
                q.push(t);
                t="";
            }
            else 
                t.push_back(i);
        }
        s="";
        while(!q.empty())
        {
            s+=q.front();
            q.pop();
            s+=' ';
        }
        s.pop_back();
        return s;
    }
};