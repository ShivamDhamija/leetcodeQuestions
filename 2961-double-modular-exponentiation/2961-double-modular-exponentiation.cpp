class Solution {
public:
    int call(long long b, long long p, int m){
    if(p <= 0) return 1;
    long long t = call(b, p/2, m);
    t = ((t * t)%m);
    return (p%2)?(t * b)%m : t;
}
    vector<int> getGoodIndices(vector<vector<int>>& v, int t) {
        vector<int>a;
        for(int i=0;i<v.size();i++)
        {
            int temp=call((call(v[i][0],v[i][1],10)),v[i][2],v[i][3]);
            if(temp==t)
                a.push_back(i);
        }
        return a;
    }
};