class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& h, int t) {
        int a=0;
        for(auto i:h){
            if(i>=t)a++;
        }
        return a;
    }
};