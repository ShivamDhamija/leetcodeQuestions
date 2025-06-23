class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>a;
        unordered_map<int,int>m;
        int j=0;
        for(auto i :nums)
        {
            if(m.find(target-i)!=m.end()){
                a.push_back(m[target-i]);
                a.push_back(j);
                break;
            } 
            m[i]=j;
            j++;
        }
        return a;
    }
};