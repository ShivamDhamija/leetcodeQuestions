class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        unordered_set<int>s;
        for(auto i:n)s.insert(i);
        int a=0,h=0;
        for(auto i:n)
            if(s.find(i)!=s.end() && s.find(i-1)==s.end()){
                h=0;
                while(s.find(i)!=s.end()){
                    h++;
                    i++;
                }
                a=max(a,h);
            }
        return a;
    }
};