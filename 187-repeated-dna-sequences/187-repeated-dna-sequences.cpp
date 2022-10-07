class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>v;
        if(s.size()<10)return v;
        unordered_map<string,int>m;
        for(int i=0;i<=s.size()-10;i++)
        {
            //cout<<s.substr(i,10)<<endl;
            m[s.substr(i,10)]++;
        }
        for(auto i:m)
        {
            //cout<<i.first<<" "<<i.second<<endl;
            if(i.second>1)
                v.push_back(i.first);
        }
        return v;
    }
};