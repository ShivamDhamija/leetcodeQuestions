class Solution {
public:
    int minSetSize(vector<int>& a) {
        unordered_map<int,int>m;
        int mi=INT_MIN;
        for(auto i:a)
        {
            m[i]++;
            mi=max(m[i],mi);
        }
        vector<int>v;
        for(auto i:m)
            v.push_back(i.second);
        sort(v.begin(),v.end());
        int n=0,no=0,i=v.size()-1;
            while(no<a.size()/2)
            {
                n++;
                no+=v[i];
                i--;
            }
            
        return n;
    }
};