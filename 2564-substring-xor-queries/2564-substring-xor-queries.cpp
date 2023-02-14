class Solution {
public:
    vector<vector<int>> substringXorQueries(string s, vector<vector<int>>& qs) {
    vector<vector<int>> res(qs.size(), {-1, -1});
    unordered_map<int, vector<int>> m;
    for (int i = 0; i < qs.size(); ++i)
        m[qs[i][0] ^ qs[i][1]].push_back(i);
    for (int i = 0; i < s.size(); ++i) {
        long long val = 0;
        for (int sz = 0; sz < 30 && i + sz < s.size(); ++sz) {
            val = (val << 1) + (s[i + sz] == '1');
            if (auto it = m.find(val); it != end(m)) {
                for (auto idx : it->second)
                    res[idx] = {i, i + sz};
                m.erase(it);
            }
            if (s[i] == '0')
                break;
        }
    }
    return res;
}
};