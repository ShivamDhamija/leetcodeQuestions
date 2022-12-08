class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int t=arr[i][j];
                arr[i][j]=1-arr[i][n-j-1];
                arr[i][n-j-1]=1-t;
                
            }
            if(n%2!=0)
                arr[i][n/2]=1-arr[i][n/2];
        }
        return arr;
    }
};