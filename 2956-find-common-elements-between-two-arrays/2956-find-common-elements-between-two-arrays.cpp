class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& n1, vector<int>& n2) {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        int a=0,b=0;
        for(auto i:n1)m1[i]++;
        for(auto i:n2)m2[i]++;
        for(auto i:m1){
            if(m2.find(i.first)!=m2.end())a+=m1[i.first];
        }
        for(auto i:m2){
            if(m1.find(i.first)!=m1.end())b+=m2[i.first];
        }
        return {a,b};
    }
};