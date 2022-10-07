class Solution {
public:
    
    int maxProduct(string s) {
        unordered_map <int, int> map;
        int n = s.size();
        int m=1 << n;
        for (int i = 0; i < (m); i++) {
            string str = "";
            for (int j = 0; j < n; j++) {
                if ((i & (1 << j))) {
                    str += s[j];
                }
            }
            string str1(str);  
            reverse(str.begin(), str.end());
            if (str == str1) {
                map[i] =str.size();
            }
        }
        int maxNum = 0;
        for (pair<int,int> i: map) {
            for (pair<int, int> j : map) {
                if (i != j) {
                    if ((i.first & j.first) == 0) {
                        maxNum = max((i.second * j.second), maxNum);
                    }
                }
            }
        }
        return maxNum;
    }
};