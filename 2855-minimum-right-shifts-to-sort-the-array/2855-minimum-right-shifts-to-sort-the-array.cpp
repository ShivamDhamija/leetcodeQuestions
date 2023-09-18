class Solution {
public:
    int minimumRightShifts(vector<int>& n) {
        vector<int>v=n;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            n.push_back(n[i]);
        int i=0;
        while(n[i]!=v[0])i++;
        for(int j=0;j<v.size();j++)
            if(n[j+i]!=v[j])return -1;
            
        return i==0?0:v.size()-i;
    }
};