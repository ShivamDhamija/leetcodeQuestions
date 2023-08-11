class Solution {
public:
    int countSeniors(vector<string>& d) {
        int a=0;
        for(auto i:d)
        {
            int t=(i[11]-'0')*10+(i[12]-'0');
            a+=t>60?1:0;
        }
            return a;
    }
};