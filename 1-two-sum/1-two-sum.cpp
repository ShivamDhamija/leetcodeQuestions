class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
       map<int,int>m;
        int x,y;
        for(int i=0;i<n.size();i++)
        {
            if(m.find(t-n[i])!=m.end())
            {
                x=m[t-n[i]];
                y=i;
                break;
            }
            m[n[i]]=i;
        }
        
            
            
        return {x,y};    
    }
};