class Solution {
public:
    int minImpossibleOR(vector<int>& n) {
        set<int>s;
        for(auto i:n)
        {
            s.insert(i);
        }
        long long i=1;
        while(i<=1e9)
        {
            if(s.find(i)==s.end())break;
            i*=2;
        }
        
        return i;
    }
};