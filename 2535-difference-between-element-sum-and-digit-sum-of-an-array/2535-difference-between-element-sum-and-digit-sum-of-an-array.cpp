class Solution {
public:
    int differenceOfSum(vector<int>& n) {
        int a=0,b=0;
        for(auto i:n){
            a+=i;
            while(i){
                b+=(i%10);
                i/=10;
            }
        }
        return abs(a-b);
    }
};