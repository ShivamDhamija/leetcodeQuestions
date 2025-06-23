class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=0,ma=0,mi=INT_MAX;
        for(auto i:prices){
            if(i<mi)ma=mi=i;
            if(ma<i)ma=i;            
            a=max(a,ma-mi);
        }
        return a;
    }
};
