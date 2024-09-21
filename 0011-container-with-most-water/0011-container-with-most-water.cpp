class Solution {
public:
    int maxArea(vector<int>& h) {
        long long int a =0;
        int i=0,j=h.size()-1;
        while(i<j){
            long long int c=(j-i)*(min( h[i],h[j] ));
            a=max(a, c);
            if(h[i]<h[j])
                i++;
            else
                j--;
        }
        return a;
    }
};