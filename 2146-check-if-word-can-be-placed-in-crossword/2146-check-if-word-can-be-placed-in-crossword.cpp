class Solution {
public:
    bool check(vector<vector<char>>& board, string word) {
    int m = board.size(), n = board[0].size();
    vector<vector<int>> h(m, vector<int>(n, -1));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            if (j == 0 || board[i][j - 1] == '#' || (j > 0 && h[i][j - 1] != -1)) {
                int pos = j == 0 ? 0 : h[i][j - 1] + 1;
                if (board[i][j] == ' ' || board[i][j] == word[pos]) {
                    if (pos == word.size() - 1) {
                        if (j == n - 1 || board[i][j + 1] == '#')
                            return true;
                    }
                    else
                       h[i][j] = pos; 
                }
            }
    return false;
}
bool placeWordInCrossword(vector<vector<char>>& board, string word) {
    int m = board.size(), n = board[0].size();
    vector<vector<char>> transposed(n, vector<char>(m));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            transposed[j][i] = board[i][j];
    return check(board, word) || check(board, string(rbegin(word), rend(word))) ||
        check(transposed, word) || check(transposed, string(rbegin(word), rend(word))) ;
}
};