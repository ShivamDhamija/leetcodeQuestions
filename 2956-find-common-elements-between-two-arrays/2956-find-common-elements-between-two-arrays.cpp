class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& n1, vector<int>& n2) {
        int a=0,b=0;
        unordered_set<int>m1,m2;
        for(auto i:n1)
            m1.insert(i);
        for(auto i:n2)
            m2.insert(i);
        for(auto i:n1)
            if(m2.find(i)!=m2.end())
                a++;
        for(auto i:n2)
            if(m1.find(i)!=m1.end())
                b++;
        return {a,b};
    }
};