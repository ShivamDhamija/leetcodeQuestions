class Solution {
public:
    int findMinDifference(vector<string>& t) {
        int m=INT_MAX;
        vector<int>v;
        for(auto i:t){        
            v.push_back(((i[0]-'0')*10+(i[1]-'0'))*60+((i[3]-'0')*10+(i[4]-'0')));            
        }
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++){
            m=min(m,v[i]-v[i-1]);
        }
        m=min(m,v[0]+24*60-v[v.size()-1]);
        return m;
    }
};