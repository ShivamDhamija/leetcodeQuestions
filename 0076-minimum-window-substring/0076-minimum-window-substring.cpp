class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>m(128,0);
        for(auto i:t)m[i]++;
        int c=t.size(),begin=0,end=0, a=0,d=INT_MAX;
        while(end<s.size()){
            c-= m[s[end++]]-- >0 ?1:0;
            while(c==0){
                if(d>end-begin){
                    d=end-begin;
                    a=begin;
                }
                c+= m[s[begin ++]]++ ==0 ?1:0;
            }
        }
        return d==INT_MAX?"":s.substr(a,d);
    }
};