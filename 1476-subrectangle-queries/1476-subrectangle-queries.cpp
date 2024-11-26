class SubrectangleQueries {
public:
    vector<vector<int>>v;
    SubrectangleQueries(vector<vector<int>>& r) {
        v=r;
    }
    
    void updateSubrectangle(int r1, int c1, int r2, int c2, int n) {
        for(int i=r1;i<=r2;i++)        
            for(int j=c1;j<=c2;j++)
                v[i][j]=n;
        
    }
    
    int getValue(int r, int c) {
        return v[r][c];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */