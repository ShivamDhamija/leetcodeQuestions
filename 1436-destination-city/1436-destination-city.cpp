class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        unordered_map<string,int>m;
        for(auto i:p)
        {
            string a=i[0],b=i[1];
            m[b]+=0;
            m[a]+=1;
        }
        string ans;
        for(auto i:m)
            if(i.second==0)
            {
                ans=i.first;
                break;
            }
        return ans;
    }
};