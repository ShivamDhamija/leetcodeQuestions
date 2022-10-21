class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
       vector<int>ans;
       
        for(int i=0;i<n.size();i++)
        {
            int ind=abs(n[i])-1;
            if(n[ind]<0)
                ans.push_back(ind+1);
            n[ind]=-(abs(n[ind]));
        }
        
        return ans;
    }
};