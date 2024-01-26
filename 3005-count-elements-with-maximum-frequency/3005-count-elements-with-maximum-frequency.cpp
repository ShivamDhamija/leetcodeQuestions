class Solution {
public:
    int maxFrequencyElements(vector<int>& n) {
        unordered_map<int,int>m;
        int ma=0;
        for(auto i:n)
        {
            m[i]++;
            ma=max(m[i],ma);
        }
        int s=0;
        for(auto i:m)
            if(i.second==ma)
                s+=ma;
        return s;
    }
};