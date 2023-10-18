class Solution {
public:
    string bestHand(vector<int>& r, vector<char>& s) {
        string a="High Card";
        vector<int>v(26);
        for(auto i:s)
        {
            v[i-'a']++;
            if(v[i-'a']==5)return "Flush";
        }
        unordered_map<int,int>m;
        int ma=0;
        for(auto i:r)
        {
            m[i]++;
            ma=max(ma,m[i]);
        }
        if(ma>=3)a="Three of a Kind";
            else if(ma==2)a="Pair";
        return a;
    }
};