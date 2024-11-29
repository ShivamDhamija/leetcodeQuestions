class Solution {
public:
        
    int sumIndicesWithKSetBits(vector<int>& n, int k) {
        int a=0;
        for(int i=0;i<n.size();i++){
            int c=0,j=i;
            while(j){
                c+=j&1;
                j=j>>1;
            }
            
            if(c==k)a+=n[i];
        }
        return a;
    }
};