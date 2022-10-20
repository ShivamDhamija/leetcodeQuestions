class Solution {
public:
    int arithmeticTriplets(vector<int>& n, int d) {
        unordered_set<int>s;
        int a=0;
        for(auto i:n)
        {
            s.insert(i);
            if(s.find(i-d)!=s.end()&&s.find(i-2*d)!=s.end())
                a++;
        }
   return a;
    }
};