class Solution {
public:
    string s;
    bool a= false;
    vector<vector<int>>v;
    int n,m;
    string t="";
    void help(vector<vector<char>>& b,int i,int j){
        if(s==t)a=true;
        if(i<0||j<0||i==n||j==m||v[i][j]!=0 || a == true ||t.size()>s.size())return ;
        v[i][j]=1;
        t.push_back(b[i][j]);
        help(b,i-1,j);
        help(b,i+1,j);
        help(b,i,j-1);
        help(b,i,j+1);        
        t.pop_back();
        v[i][j]=0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        s=word;
        n=board.size();
        m=board[0].size();
        v.resize(n,vector<int>(m));
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(board[i][j]==s[0])
            help(board,i,j);
        }
        return a;
    }
};
