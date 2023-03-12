class Solution {
public:
    int vowelStrings(vector<string>& w, int l, int r) {
        int a=0;
        for(int i=l;i<=r;i++)
        {
            char n=w[i][0],m=w[i][w[i].size()-1];
            bool t1=false,t2=false;
            if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
                t1=true;
            if(m=='a'||m=='e'||m=='i'||m=='o'||m=='u')
                t2=true;
            if(t1&&t2)
                a++;
        }
        return a;
    }
};