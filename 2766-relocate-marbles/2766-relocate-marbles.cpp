class Solution {
public:
    vector<int> relocateMarbles(vector<int>& n, vector<int>& f, vector<int>& t) {
        map<int,int>map;
        for(auto i:n)map[i]++;
        for(int i=0;i<f.size();i++)
        {
            int  j=f[i],k=t[i];
            int temp=map[j];
            map.erase(j);
            map[k]=temp;
        }
        vector<int>v;
        for(auto i:map)
            v.push_back(i.first);
        return v;
    }
};

