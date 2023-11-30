class Solution {
public:
    int reductionOperations(vector<int>& n) {
        int a=0;
        unordered_map<int,int>m;
        vector<int>s;
        for(auto i:n)
            m[i]++;
        for(auto i:m)
            s.push_back(i.first);
           sort(s.begin(),s.end()); 
        for(int i=1;i<s.size();i++)
        {
            a+=m[s[i]]*i;
        }
        return a;        
    }
};