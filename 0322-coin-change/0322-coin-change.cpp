class Solution {
public:    
    vector<vector<int>>m;
    int help(vector<int>& coins, int amount,int i){
        if(amount ==0)return 0;
        if(amount<0 ||i==coins.size())return INT_MAX;
        if(m[amount][i]!=-1)return m[amount][i];
        int l=help(coins,amount, i+1);
        int t=help(coins,amount-coins[i],i);        
        return  m[amount][i]=min(l, t==INT_MAX?t:t+1); 
    }
    int coinChange(vector<int>& coins, int amount,int i=0) {
        m.resize(amount+1,vector<int>(coins.size(),-1));
        int a= help(coins,amount, 0);
        return a==INT_MAX?-1:a;
    }
};