class Solution {
public:
    void help(vector<vector<int>>&v,int i,int j, int I,int J,int c,int o,vector<vector<int>>&v2){
        if(i<0 || j<0|| i==I ||j==J ||v[i][j]!=o ||v2[i][j]!=-1)return ;
        v[i][j]=c;
        v2[i][j]=0;
        help(v,i+1,j,I,J,c,o,v2);
        help(v,i,j+1,I,J,c,o,v2);
        help(v,i,j-1,I,J,c,o,v2);
        help(v,i-1,j,I,J,c,o,v2);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>v2(image.size(),vector<int>(image[0].size(),-1));
        help(image,sr,sc,image.size(),image[0].size(),color,image[sr][sc],v2);
        return image;
    }
};