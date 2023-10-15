class Solution {
public:
    vector<int> findIndices(vector<int>& n, int id, int v) {
        for(int i=0;i<n.size();i++)
        {
            for(int j=i+id;j<n.size();j++)
                if(abs(n[i]-n[j])>=v)return {i,j};
        }
        return {-1,-1};
    }
};