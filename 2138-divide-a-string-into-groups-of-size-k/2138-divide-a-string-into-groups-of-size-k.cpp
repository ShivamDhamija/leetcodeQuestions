class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        while(s.size()%k!=0)
        {
            s.insert(s.end(),fill);
        }
        int i=0;
        while(i<s.size())
        { 
            //cout<<i<<" "<<i+k<<endl;
            v.push_back(s.substr(i,k));
            i=i+k;
        }
        return v;
    }
};