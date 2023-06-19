class Solution {
public:
    int distanceTraveled(int m, int a) {
        
        for(int i=1;i<=m&&a>0;i++)
        {
            if(i%5==0)
            {
                a--&&m++;
            }
        }
        return m*10;
    }
};