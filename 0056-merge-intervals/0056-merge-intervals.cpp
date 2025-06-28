class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>a;
        for(auto i:intervals){
            if(a.size()==0 || a[a.size()-1][1]<i[0])a.push_back(i);
            else a[a.size()-1][0] =min(a[a.size()-1][0],i[0]),a[a.size()-1][1] = max(a[a.size()-1][1],i[1]);
        }
        return a;
    }
};