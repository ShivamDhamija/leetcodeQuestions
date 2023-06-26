class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& w) {
        unordered_set<string>s;
        for(auto i:w)s.insert(i);       
        int a=0;
        for(auto i:w)
        { 
            string c=i;
            reverse( i.begin(), i.end() );
            if(c==i)continue;
            if( s.find(i)!=s.end() )a++;
        }
        return a/2;
    }
};