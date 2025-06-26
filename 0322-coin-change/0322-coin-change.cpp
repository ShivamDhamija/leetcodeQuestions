class Solution {
public:
    vector<vector<int>>m;
    int help(vector<int>& coins, int amount, int i) {
        if(amount ==0) return 0;
        if(i==coins.size()||amount<0)return INT_MAX;        
        if(m[i][amount]!=0)return m[i][amount];
        int a= help(coins,amount,i+1);
        int b= help(coins,amount-coins[i],i);
        return m[i][amount] =min( a , b==INT_MAX?b:b+1 );
    }
     int coinChange(vector<int>& coins, int amount){
        m.resize(coins.size(),vector<int>(amount+1));
        int a= help(coins,amount,0);
        return a==INT_MAX?-1:a;
     }
};