class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>v(26);
        for(auto i:s)
            v[i-'a']=1;
        for(int i=0;i<26;i++)
            if(v[i]==0)return 0;
        return 1;
    }
};