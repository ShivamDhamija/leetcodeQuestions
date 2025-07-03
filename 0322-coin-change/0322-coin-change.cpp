class Solution {
public:
    int help(vector<vector<int>>&v,vector<int>&c, int a, int i){
        if(a==0)return 0;    
        if(i==c.size()||a<0)return INT_MAX;
        if(v[i][a]!=-1)return v[i][a];
        int t=help(v,c,a-c[i],i);
        return v[i][a]=min(help(v,c,a,i+1),t==INT_MAX?t:t+1);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>v(coins.size(),vector<int>(amount+1,-1));
        int a=help(v,coins,amount,0);
        return a==INT_MAX?-1:a;
    }
};