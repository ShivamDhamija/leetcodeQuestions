class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ma=0,mi=p[0];
        for(auto i:p){
            mi=min(mi,i);
            ma=max(ma,i-mi);
        }
        return ma;
    }
};