class Solution {
public:
    int averageValue(vector<int>& n) {
        int s=0,a=0;
        for(auto i:n)
            if(i%3==0&&i%2==0)
            {
                s+=i;a++;
            }
        if(a==0)
            a++;
        return s/a;
    }
};