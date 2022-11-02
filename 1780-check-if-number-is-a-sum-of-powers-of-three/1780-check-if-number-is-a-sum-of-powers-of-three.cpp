class Solution {
public:
    bool checkPowersOfThree(int n) {
         bool oneChance = true;
        
        while(n>1){
            if(n%3==0){
                n/=3;
                oneChance = true;
            } else if(oneChance && n%3==1) {
                n--;
                oneChance = false;
            } else {
                return false;
            }
        }
        
        return true;
    }
};