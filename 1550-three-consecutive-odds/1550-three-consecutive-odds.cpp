class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& a) {
        if(a.size()>2)
        {
            for(int i=2;i<a.size();i++)
                if(a[i]%2!=0&&a[i-1]%2!=0&&a[i-2]%2!=0)return 1;
        }
            return 0;
    }
};