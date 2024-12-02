class Solution {
public:
        
    int largestAltitude(vector<int>& g) {
        int a=0,b=0;
        for(auto i:g){
            b+=i;
            a=max(b,a);
        }
            
        return a;
    }
};