class Solution {
public:
    int findSpecialInteger(vector<int>& a) {
        int n=a.size()/4;
        unordered_map<int,int>m;
        int no;
            for(auto i:a)
            {m[i]++;
            if(m[i]>n)no=i;}
        return no;
    }
};