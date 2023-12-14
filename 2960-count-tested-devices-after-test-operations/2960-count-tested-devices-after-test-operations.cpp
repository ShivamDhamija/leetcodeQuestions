class Solution {
public:
    int countTestedDevices(vector<int>& b) {
        int c=0,a=0;
        for(auto i:b)
        {
            i=i-c;
            if(i>0)
            {
                a++;c++;
            }
        }
        return a;
    }
};