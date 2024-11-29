class Solution {
public:
    int minimumSum(int n) {
        vector<int>v;
        while(n){
            v.push_back(n%10);
            n=n/10;
        }
        sort(v.begin(),v.end());
        int a=v[0]*10+v[1]*10+v[2]+v[3];
        return a;
    }
};