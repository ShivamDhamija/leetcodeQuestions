class Solution {
public:
    bool isSameAfterReversals(int n) {
        if(n%10==0&&n!=0)return 0;
        return 1;
    }
};