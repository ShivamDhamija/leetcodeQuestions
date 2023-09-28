class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
    int res = 0;
    const int N = reward1.size();
    for (int i = 0; i < N; i++)
    {
        reward1[i] = reward1[i] - reward2[i]; // let's reused reward1 to keep diffs
        res += reward2[i];
    }
    std::sort(reward1.begin(), reward1.end(), greater<>{});  // reverse order sorting
    for (int i = 0; i < k; i++)
    {
        res += reward1[i];  // take k greatest diffs
    }
    return res;
}
};